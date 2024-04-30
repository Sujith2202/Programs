#include <iostream>
using namespace std;
class Base{

    public:
        Base(){
            cout<<"Constructing Base"<<endl;
        }
        ~Base(){
            cout<<"Destructing base"<<endl;
        }
};

class Derived : public Base{

    public:
        Derived(){
            cout<<"Condtructing Derived"<<endl;
        }
        ~Derived(){
            cout<<"Destructing the Derived"<<endl;
        }
};


int main(){

    Derived *d =new Derived();
    Base* bb;
   // bb=&d;
    delete bb;

    return 0;
}