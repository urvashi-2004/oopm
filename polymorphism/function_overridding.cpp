#include<iostream>
using namespace std;
class animal{
    public:
    string name="lion";
};
class dog: public animal{
    public:
    string name="labrador";
};
int main(void){
    animal d = dog();

    cout<<d.name<<endl;

    return 0;
}