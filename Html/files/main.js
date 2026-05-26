/* ============================================
   PORTFOLIO — main.js
   ============================================ */

document.addEventListener('DOMContentLoaded', () => {

  // ---- Active nav link ----
  const currentPage = window.location.pathname.split('/').pop() || 'index.html';
  document.querySelectorAll('.nav-links a, .nav-mobile a').forEach(link => {
    const href = link.getAttribute('href');
    if (href === currentPage || (currentPage === '' && href === 'index.html')) {
      link.classList.add('active');
    }
  });

  // ---- Mobile burger ----
  const burger = document.getElementById('navBurger');
  const mobileNav = document.getElementById('navMobile');
  if (burger && mobileNav) {
    burger.addEventListener('click', () => {
      const open = mobileNav.classList.toggle('open');
      burger.querySelectorAll('span')[0].style.transform = open ? 'rotate(45deg) translate(4px,5px)' : '';
      burger.querySelectorAll('span')[1].style.opacity  = open ? '0' : '1';
      burger.querySelectorAll('span')[2].style.transform = open ? 'rotate(-45deg) translate(4px,-5px)' : '';
    });
  }

  // ---- Scroll-triggered reveals ----
  const revealEls = document.querySelectorAll('.reveal');
  if (revealEls.length) {
    const observer = new IntersectionObserver((entries) => {
      entries.forEach(e => {
        if (e.isIntersecting) {
          e.target.classList.add('visible');
          observer.unobserve(e.target);
        }
      });
    }, { threshold: 0.12 });
    revealEls.forEach(el => observer.observe(el));
  }

  // ---- Timeline items ----
  const timelineItems = document.querySelectorAll('.timeline-item');
  if (timelineItems.length) {
    const tObserver = new IntersectionObserver((entries) => {
      entries.forEach(e => {
        if (e.isIntersecting) {
          e.target.classList.add('visible');
          tObserver.unobserve(e.target);
        }
      });
    }, { threshold: 0.15 });
    timelineItems.forEach(el => tObserver.observe(el));
  }

  // ---- Skill bars animation ----
  const skillBars = document.querySelectorAll('.skill-bar-fill');
  if (skillBars.length) {
    const barObserver = new IntersectionObserver((entries) => {
      entries.forEach(e => {
        if (e.isIntersecting) {
          const fill = e.target;
          const pct = fill.dataset.pct || '80';
          fill.style.width = pct + '%';
          fill.classList.add('animate');
          barObserver.unobserve(fill);
        }
      });
    }, { threshold: 0.5 });
    skillBars.forEach(bar => {
      const pct = bar.dataset.pct || '80';
      bar.style.width = '0%';
      barObserver.observe(bar);
    });
  }

  // ---- Project filter ----
  const filterBtns = document.querySelectorAll('.filter-btn');
  const projectCards = document.querySelectorAll('.project-card');
  if (filterBtns.length) {
    filterBtns.forEach(btn => {
      btn.addEventListener('click', () => {
        filterBtns.forEach(b => b.classList.remove('active'));
        btn.classList.add('active');
        const cat = btn.dataset.filter;
        projectCards.forEach(card => {
          const show = cat === 'all' || card.dataset.cat === cat;
          card.style.opacity = show ? '1' : '0.2';
          card.style.pointerEvents = show ? 'all' : 'none';
          card.style.transform = show ? '' : 'scale(0.96)';
        });
      });
    });
  }

  // ---- Contact form ----
  const form = document.getElementById('contactForm');
  if (form) {
    form.addEventListener('submit', (e) => {
      e.preventDefault();
      const btn = form.querySelector('.submit-btn');
      const success = document.getElementById('formSuccess');
      btn.textContent = 'Sending…';
      btn.disabled = true;
      setTimeout(() => {
        form.reset();
        btn.textContent = 'Send Message';
        btn.disabled = false;
        if (success) { success.classList.add('show'); }
        setTimeout(() => { if (success) success.classList.remove('show'); }, 4000);
      }, 1400);
    });
  }

  // ---- Smooth nav background on scroll ----
  const nav = document.querySelector('.nav');
  if (nav) {
    window.addEventListener('scroll', () => {
      nav.style.boxShadow = window.scrollY > 20
        ? '0 2px 20px rgba(0,0,0,0.06)'
        : 'none';
    }, { passive: true });
  }

  // ---- Counter animation ----
  const counters = document.querySelectorAll('[data-count]');
  if (counters.length) {
    const cObserver = new IntersectionObserver((entries) => {
      entries.forEach(e => {
        if (e.isIntersecting) {
          const el = e.target;
          const target = parseInt(el.dataset.count);
          const suffix = el.dataset.suffix || '';
          let current = 0;
          const step = Math.ceil(target / 50);
          const interval = setInterval(() => {
            current = Math.min(current + step, target);
            el.textContent = current + suffix;
            if (current >= target) clearInterval(interval);
          }, 30);
          cObserver.unobserve(el);
        }
      });
    }, { threshold: 0.5 });
    counters.forEach(c => cObserver.observe(c));
  }

});
