#include<iostream>
using namespace std;

int main(){

    int num,rev=0,rem;
    cout<<"Enter a number to reverse"<<endl;
    cin>>num;

    while(num!=0){

        rem=num%10;
        rev=rev+(rev*10);
        num=num/10;

    }
}