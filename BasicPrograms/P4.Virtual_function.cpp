#include<iostream>
using namespace std;

class Animal{

    public:
       virtual void animalsound(){
            cout<<"Lions sounds"<<endl;

        }

};
class forest : public Animal{

    public:
        void animalsound(){
            cout<<"FOrest are homes "<<endl;
        }
};

int main(){


    Animal *obj;    ///creating a pointer object of base class 
    obj =new forest(); //assing base oblect to derived class
    obj->animalsound();

    //forest f1;
    //f1.animalsound();
}