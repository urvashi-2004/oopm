#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void func1(){
        cout<<"this is function 1"<<endl;
    }
};
class B: public A{
    public:
    void func2(){
        cout<<"this is function 2"<<endl;
    }
};
class C: public A{
    public:
     void func3(){
        cout<<"this is function 3"<<endl;
    }
};
class D: public A{
    public:
     void func4(){
        cout<<"this is function 4"<<endl;
    }
};
int main(){
    D d;
    C c;
    B b;
    A a;

    d.func1();
    d.func4();

    cout<<endl;

    c.func3();
    c.func1();

    cout<<endl; 

    b.func2();
    b.func1();

    cout<<endl;

    a.func1();

    return 0;
}