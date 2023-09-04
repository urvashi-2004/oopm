#include<iostream>
using namespace std;
class employee{
    public:
    int id;
    string name;
    float salary;

    employee(int id, string name, float salary){
        this->id=id;
        this->name=name;
        this->salary=salary;
    }
    void display(){
        cout<<"your id is : "<<id<<endl;
        cout<<"your name is : "<<name<<endl;
        cout<<"your salary is : "<<salary<<endl;
    }
};
int main(void){

    employee e1 = employee(1,"urvashi",50000);

    e1.display();

    return 0;
}