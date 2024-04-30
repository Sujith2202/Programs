#include<iostream>

using namespace std;

class Base {

    int x;

    public:

    virtual void func()=0;

    int getX(){

       //cout<<x<<endl;
        return x;
    }

};

class Derived : public Base{

    public:
    void func(){
        cout<<"Pure virtuall class Implementation in Derived class"<<endl;
    }
};

int main(){

    Derived dd;
    dd.getX();

    dd.func();

}