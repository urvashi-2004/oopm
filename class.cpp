#include<iostream>
using namespace std;
class student{
    public:
    int id;
    string name;
    void insert(int i, string s){
        id=i;
        name=s;
    }
    void display(){
        cout<<id<<" "<<name<<endl;
    }
};
int main(void){
    student s1;
    student s2;

    s1.insert(1,"Urvashi");
    s2.insert(2,"hemant");

    s1.display();
    s2.display();

    return 0;
}