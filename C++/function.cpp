#include <iostream>
using namespace std;


//F1 Void Function ---> Didn't return any value     
/*
void printName() 
{       
    cout << "Sonu Kumar" << endl;
}


//F2 Parameterized Void Function ---> Didn't return any value       

void printName(string name) 
{       
    cout << "Hey " << name << endl;
}

void sum2nos(int a, int b) 
{       
    int sum = a + b;
    cout << "Sum is: " << sum << endl;          
}
                                                                */

//F3 Parameterized Function with return type ---> return a value
/*
int sum2nus(int a, int b) 
{       
    int sum = a + b;
    return sum;
}
*/

// Function Calls Pass by Value
int CBV(int x) 
{       
    x = x + 5;  // Modifying local copy
    cout << "Inside func, x = " << x << endl;

    return (x);
}


// Functuion Calls Pass by Reference

void CBR(int &x) 
{       
    x = x + 5;  // Modifying original variable
    cout << "Inside func, x = " << x << endl;
}


int main()
{
/*    string name;
    cin>> name;
    printName();    // Function Call without Argument (F1)
    printName(name);  // Function Call with Argument (F2)
*/

int num1, num2, sum;
    cin >> num1 >> num2;
//    sum2nos(num1, num2); // Function Call with Arguments (F2)     

//    sum = sum2nus(num1, num2); // Function Call with Arguments & return type (F3)   
//    cout << "Returned Sum is: " << sum << endl;

int y = 7, z = 11;
cout<<"Call by Reference Example:"<<endl<<endl;
cout << "Before func call, z = " << z << endl;
CBR(z);  // Pass by Reference
cout << "After func call, z = " << z << endl;

cout<<"\n \n \n \n";   


cout<<"Call by Value Example:"<<endl<<endl;
cout << "Before func call, y = " << y << endl;
CBV(y);  // Pass by Value
cout << "After func call, y = " << y << endl;





    return 0;
}
/* --- IGNORE ---*/
