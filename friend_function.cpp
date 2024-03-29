#include<iostream>
using namespace std;

class Animal {
    private:
    int leg_count;
    friend class Dog;

    public:
    Animal() :leg_count(4){}

};
class Dog {
    public:
    Animal a1;
    void leg_count(){
        cout<<"Legs ="<<a1.leg_count;
    }
};
int main(){
    Dog df;
    df.leg_count();
    return 0;
}