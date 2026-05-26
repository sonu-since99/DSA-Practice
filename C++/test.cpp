// Write a Program to find factorial of a number.

#include<iostream>
using namespace std;

int main(){
    int num, flag=0;
    cout<<"Enter a Number : ";
    cin>>num;

        cout<<"\n\n";

    for(int i=1; i<=num; i++){
        for(int j=1;j<=i; j++){
        if(i%j==0){

            flag++;
        }
    }
        if(flag==2){
            cout<<i<<"\n";
        }
        flag=0;
}
}
