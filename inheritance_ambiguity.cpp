#include<iostream>
using namespace std;
class classA{
    public:
    void say(){
        cout<<"this is my country"<<endl;
    }
};
class classB{
    public:
    void say(){
        cout<<"welcome to india"<<endl;
    }
};
class classC: public classA,public classB{
    public:
    void hello(){
        cout<<"say hello"<<endl;
    }
};
int main(){
    classC c;

    c.classA::say();
    c.classB::say();

    c.hello();
}