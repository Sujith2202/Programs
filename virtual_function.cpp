#include<iostream>

using namespace std;

class Base{
    public:
        //virtual function
        virtual void print(){
            cout<<"Base class"<<endl;
        }
};

class Derived: public Base{

    void print(){
        cout<<"Derived Class"<<endl;
    }
};
int main(){

    Derived d1;
    
    Base* bb=&d1;
    bb->print();

}