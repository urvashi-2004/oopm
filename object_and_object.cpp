#include<iostream>
using namespace std;
class student{
    public:
    int rollno;
    string name;
    char grade;
};
int main(){
    student s;
    s.rollno=60;
    s.name="Urvashi Saratkar";   
    s.grade='A';

    cout<<"My Name is : "<<s.name<<endl;
    cout<<"My Roll No is : "<<s.rollno<<endl;
    cout<<"My Grade is : "<<s.grade<<endl;

    return 0;

}