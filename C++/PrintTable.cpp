#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"Enter any Number : ";
    cin>>num;
    for(int i=1; i<11; i++){
        cout<<endl<<num<<"X"<<i<<"="<<num*i;
    }

    return 0;
}