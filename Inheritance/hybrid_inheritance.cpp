#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void func1(){
        cout<<"This is function 1"<<endl;
    }
};
class B:public A{
    public:
    void func2(){
        cout<<"this is function 2"<<endl;
    }
};
class C{
    public:
    void func3(){
        cout<<"this is function 3"<<endl;
    }
};
class D:public C,public B{
    public:
    void func4(){
        cout<<"this is function 4"<<endl;
    }
};
int main(){
    D d;

    d.func1();
    d.func2();
    d.func3();
    d.func4();

    return 0;
}