#include<iostream>
using namespace std;

int fib(int n){

    if(n==0)
    return 0;

    if(n==1||n==2)
    return 1;

    return ((fib(n-1)+fib(n-2)));
}

int main(){

    int n=5;
    cout<<"Fibnoccci series of  "<<n<<"  is"<<endl;

    for(int i=0;i<n;i++){
        cout<<fib(i)<<" ";
    }
    return 0;
   
}