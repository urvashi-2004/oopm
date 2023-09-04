#include<iostream>
using namespace std;
class A{
    public:
    int a,b;
    public:
    void opt(){
        cout<<"hello"<<endl;
    }
    void operator + (A const& obj){
        int x=obj.a;
        int y=obj.b;
        cout<<x+y<<endl;
    }
};
int main(){
   // A c1(2,3);

   // opt(2,3);


     return 0;
}