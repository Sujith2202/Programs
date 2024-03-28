#include<iostream>
using namespace std;

int main(){

    int i,j,rows,k=1;
    cout<<"Enter the rows"<<endl;
    cin>>rows;

    for(int i=1;i<rows;i++){
        for(int j=1;j<i;j++){
            cout<<k++;
        }
        cout<<endl;
    }
    return 0;
}