import java.util.Scanner;

class Largest3No {
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
      
      Float a = sc.nextFloat();
      Float b = sc.nextFloat();
      Float c = sc.nextFloat();
      
        if(a>b && a>c)
            System.out.println("Largest No. is : "+a);
        else if(c>a && c>b)
            System.out.println("Largest No. is : "+c);
        else if (b>a && b>c)
            System.out.println("Largest No. is : "+b);
        else
            System.out.println("All are equal");

        sc.close();
   }
}