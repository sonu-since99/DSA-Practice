
/*
🔹 1. FOR LOOP (Most used in DSA)

🧠 Interview Tip
i++ → post increment
++i → pre increment (slightly faster, used in STL)

Program: Print numbers from 1 to N
*/

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // for loop: initialization; condition; increment
    for (int i = 1; i <= n; i++) {
        cout << i << " ";  // prints current value of i
    }

    return 0;
}






/*
🔹 2. WHILE LOOP (Condition-based)

🧠 DSA Use
Digit problems
Reverse number
Palindrome number

Program: Sum of digits of a number


#include <iostream>
using namespace std;

int main() {
    int n = 123;
    int sum = 0;

    // loop runs until n becomes 0
    while (n > 0) {
        int digit = n % 10;   // get last digit
        sum = sum + digit;   // add digit to sum
        n = n / 10;           // remove last digit
    }

    cout << "Sum = " << sum;
    return 0;
}

*/

/*

🔹 3. DO-WHILE LOOP (Runs at least once)

🧠 Cheat Rule
do-while → 1 baar guaranteed execute

Program: Print number at least once

#include <iostream>
using namespace std;

int main() {
    int i = 1;

    do {
        cout << i << " ";
        i++;
    } while (i <= 5);

    return 0;
}
*/