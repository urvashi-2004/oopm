#include<bits/stdc++.h>
using namespace std;
class school{
    public:
    int id;
    string name;
    float salary;

    public:
    void setdetails(){
        id=1;
        name="Urvashi";
        salary=40000;
    }
};
class teachers: public school{
    public:
    void getdetails(){
        cout<<"Id : "<<id<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};
int main(){
    teachers t;
    t.setdetails();
    t.getdetails();

    return 0;
}