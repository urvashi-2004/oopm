#include<iostream>
using namespace std;
struct studentclass{
    int id;
    string name;
    int marks;
};
int main(){
    struct studentclass student1={1,"urvashi",89};

    struct studentclass student2={2,"satyabhama",90};

    cout<<student1.id<<" "<<student1.name<<" "<<student1.marks;

    cout<<endl;

    cout<<student2.id<<" "<<student2.name<<" "<<student2.marks;

    return 0;
}