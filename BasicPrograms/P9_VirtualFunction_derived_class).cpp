#include<iostream>
using namespace std;

class A {

    public:
    virtual void fun(){

        cout<<"Hello fun Base class A"<<endl;
    }
};

class B : public  A{
    public:
    void fun(){
        cout<<"Hello fun Derived class B"<<endl;
    }
};

class C:public B{

    public:
    void fun(){
        cout<<"Hello fun Derived class C"<<endl;
    }
};
int main(){

    C CC;
    A* aa;

    aa=&CC;
    aa->fun();
}