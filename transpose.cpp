#include<iostream>
using namespace std;

int main(){
    int A[5][5],i,j,m,n;
    cout<<"Enter the Number of rows and columns"<<endl;
    cin>>m>>n;
    cout<<"Enter the elements of martix"<<endl;
    for(int i=0;i<m;i++)
       
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    cout<<"Elements of the martix are"<<endl;
         for(int i=0;i<m;i++)
         {
        for(int j=0;j<n;j++)
        
          cout<<"\t"<<A[i][j];
          cout<<"\n";

        }
    cout<<"Transpose of a matrix is"<<endl;

    for(int i=0;i<n;i++)
         {
        for(int j=0;j<m;j++)
        
          cout<<"\t"<<A[j][i];
          cout<<"\n";

        }

}