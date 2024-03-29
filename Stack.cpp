#include<iostream>
#include<stack>



using namespace std;

int top = -1;
 void Push(int x)
{
    int N = 5;
    
    int stack[5];
    


    if(top == (int)(N-1))
    {
        cout<<"The stack is Overflow"<<endl;
    }else{
        top++;
        stack[top]=x;
        cout<<"Stack elements are "<<stack[top]<<endl;
    }
}

int main()
{
    Push(10);
    Push(20);
    Push(30);
    Push(10);
    Push(20);
    Push(30);

}

