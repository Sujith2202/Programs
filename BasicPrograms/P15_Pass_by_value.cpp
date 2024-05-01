#include <iostream>

using namespace std;

void say_age(int age){//formal parameter
    ++age;
    cout<<"You age is"<<age<<endl;//23
    cout<<&age<<endl;
    
    
}

int main() {
    // Write C++ code here
    //std::cout << "Try programiz.pro";
    int age =22;
    cout<<"Before call"<<age<<endl;//22
     cout<<"Before address "<<&age<<endl;
    say_age(age);//actual parameter
    cout<<"Afer call"<<age<<endl;//22
     cout<<"After address"<<&age<<endl;
    


    return 0;
}

o/p


Before call22
Before address 0x7fff0236c4fc
You age is23
0x7fff0236c4dc
Afer call22
After address0x7fff0236c4fc
