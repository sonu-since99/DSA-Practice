#include<iostream>
using namespace std;
int main(){

    int num, flag=0;
    cout<<"Enter a number to check Armstrong or not : ";
    cin>>num;

// To Count Number of digits in "flag" variable 
    while(num>1)
    {
        num=num/10;
        cout<<endl<<num;
        flag++;
    }
    cout<<flag;

    // int arr[flag];

    // for(int i=1; i<=flag; i++){
    //     arr[i]=num/10;
    // }



    //return 0;

}