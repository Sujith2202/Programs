#include<iostream>
using namespace std;

int revarray(int* arr,int n){

    if(n==0){
        return 0;}
    
    cout<<arr[n-1]<<' '<<endl;
    return revarray(arr,n-1);
}

int main(){

    int arr[6]={1,2,3,4,5,6};
    revarray(arr,6);
    return 0;
}