#include<bits/stdc++.h>
using namespace std;
class student{
    private:
    int marks;

    public:
    int id;
    string name;
};
int main()
{
    student s;
    s.id=60;
    s.name="Urvashi Saratkar";

    cout<<"My id is : "<<s.id<<endl;

    cout<<"My name is : "<<s.name<<endl;

   // cout<<"My marks is :"<<s.marks<<endl;  // can not access beacuse it is a private member of class.
    
    return 0;

}