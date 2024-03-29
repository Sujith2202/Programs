#include<iostream>
using namespace std;

int search(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    
        if(arr[i]==x)
            return i;

      
    return -1;
    
}

int main(){

    int arr[]={5,7,32,1,6,8,5,8};
    int x=32;

    int n =sizeof(arr)/sizeof(arr[0]);

   int result = search(arr,n,x);

    if(result==-1)
    {
        cout<<"element is not present in array";

    }
    else{
        cout<<"Element is present in array"<<x;
    }
}

