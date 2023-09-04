#include<bits/stdc++.h>
using namespace std;
class school{
    public:
    void schoolclass(){
        cout<<"This is school"<<endl;
    }
};
class teachers: public school{
    public:
    void teacherclass(){
        cout<<"This is teacher"<<endl;
    }
};
class student: public teachers{
    public:
    void studentclass(){
        cout<<"this is student"<<endl;
    }
};
int main(){
    student s;
    s.schoolclass();
    s.teacherclass();
    s.studentclass();

    return 0;

}