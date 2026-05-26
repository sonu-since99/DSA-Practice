#include <iostream>
using namespace std;
int main()
{
    string s = "Batatavadaa";       // dont need to define size of string, it automatically adjusts
    int len = s.size();             // here s.size means tell me the size of string 's' and store it in a variable 'len' and it returns the number of characters in the string. size() function returns length of string
    s[len - 1] = 'h';               // changing last character of string using indexing to 'h'.
    if (len > 0)                    // to avoid error when string is empty
        cout << s[len - 1] << endl; // printing last character of string using indexing
    cout << s[6] << endl;           // printing 7th character of string using indexing

    return 0;
}