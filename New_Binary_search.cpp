#include<iostream>
using namespace std;
int main(){

int len,i,arr[15],temp,j,first,last,middle,num;

cout<<"Enter the array size"<<endl;
cin>>len;

cout<<"enter "<<len<<"elements"<<endl;
for(i=0;i<len;i++)
cin>>arr[i];

//Alter the elements
for(i=0;i<(len-1);i++)
{
    for(j=0;j<(len-i-1);j++)
    {
           if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
cout<<"The sorted elements are"<<endl;
for(i=0;i<len;i++)
{
    cout<<arr[i]<<" ";
}

//Search

cout<<"Enter the element to search"<<endl;
cin>>num;
first=0;
last=(len-1);

middle=(first+last)/2;

while(first<=last)
{
    if(arr[middle]<num)
    first=middle+1;
    else if(arr[middle]==num)
    {
    cout<<"Element is found at position"<<middle+1;
    break;
    }
    else
        last=middle-1;
        middle=(first+last)/2;
}
if(first>last){
    cout<<"Element not found"<<endl;
    cout<<endl;
    return 0;

}

}