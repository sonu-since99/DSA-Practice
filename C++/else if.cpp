// Concept of else if 


#include <iostream>
using namespace std;

/*
int main() 
{
    int age;
    //cout<<"Enter the age : ";
    cin>>age;          
        if(age<18)
        {
            cout<<"Not Eligible for Job";
        }
        else if(age<55)
        {
            cout<<"Eligible for Job";
        }
        else if(age<=57)
        {
            cout<<"Eligible for Job, But Retirement Soon.";
        }
        else
        {
            cout<<"Retirement time";
        }

    return 0;
}
*/



//concept of nested if


int main() 
{
    int age;
    cin>>age;          
        if(age<18)
        {
            cout<<"Not Eligible for Job";
        }
        else if(age<=57)
        {
            cout<<"Eligible for Job ";
                if(age>=55)
                    cout<<"But Retirement Soon.";
        }
        else
        {
            cout<<"Retirement time";
        }

    return 0;
}
