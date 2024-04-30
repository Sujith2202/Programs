#include<iostream>
using namespace std;

class Abstraction {

    int n;
    char ch;

    public:
    Abstraction(int num,char cc)
    {
        n=num;
        ch=cc;
    }

    void get_my_values(){

        cout<<"NUmber is"<<n<<endl;
        cout<<"Char is"<<ch<<endl;



    }



};

int main(){

    Abstraction obj(5,'f');
    obj.get_my_values();
    
    
    }