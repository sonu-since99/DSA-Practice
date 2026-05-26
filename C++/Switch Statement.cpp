#include <iostream>
using namespace std;
int main() 
{
    int day;
    cin>>day;{
        switch (day) // switch statement starts here
        {
        case 1:     // Monday
            /* code */
            cout<<"Monday";
            break;
        case 2:     // Tuesday
            cout<<"Tuesday";
            break;
        case 3:     // Wednesday
            cout<<"Wednesday";
            break;
        case 4:     // Thursday
            cout<<"Thursday";
            break;
        case 5:     // Friday
            cout<<"Friday";
            break;
        case 6:     // Saturday
            cout<<"Saturday";
            break;
        case 7:     // Sunday
            cout<<"Sunday";
            break;
        
        default:   // when none of the cases match
        cout<<"Invalid Input ";
            break;  // skip the next lines of code
            cout<<"Recheck the values ";  // this line will never execute due to above break statement
        }
    }
cout<<"check ";
    return 0;
}