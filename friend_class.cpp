#include <iostream>
using namespace std;
class A{
    public:
    int x=10;
    int y=20;

    friend class B;
};
class B{
    public:
    void display(A& a){
        cout<<a.x<<endl;
        cout<<a.y<<endl;
    }
};
int main(){
    A obj1;
    B obj2;

    obj2.display(obj1);

    return 0;
}