//sum of n numbers
#include<iostream>

using namespace std;
 int main(){

    int n,sum=0,i,num;
    cout<<"Enter how many number you need to add"<<endl;
    cin>>n;

    cout<<"Enter each element to sum"<<endl;
    for(i=0;i<n;i++){
        cin>>num;
        sum=sum+num;
    }

    cout<<"Total sum of"<<sum<<endl;
 }