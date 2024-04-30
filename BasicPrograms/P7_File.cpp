
 #include<iostream>
 using namespace std;

 class test{
    public:
    static int a;

    
        void getvalue(){

            cout<<"Value of a is"<<a<<endl;

        }
 };

 int test:: a=10;

 int main(){

    test::a=100;
    cout<<test::a<<endl;

    test t1;
    t1.getvalue();

 }
