#include<iostream>
using namespace std;

int main(){

    int arr[5],i,j,n,max,min;

    cout<<"Enter the array elements"<<endl;
    cin>>n;

    cout<<"ENter all elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
   max=arr[0];
   for(i=0;i<n;i++)
   {
    
    if(max<arr[i])
    max=arr[i];
    
    }
    min=arr[0];
    if(min>arr[i])
    min=arr[i];

    cout<<"Largest element is"<<max<<endl;
    cout<<"Smallest element is"<<min<<endl;
}
