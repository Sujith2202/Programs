#include<iostream>
#include<strings.h>

using namespace std;

int main(){

     string str ="Hello Bengaluru";
     int length =0;

     for(int i=0;str[i]!=0;i++){
        length++;
     }

     cout<<"The length of array is "<<length<<endl;
}