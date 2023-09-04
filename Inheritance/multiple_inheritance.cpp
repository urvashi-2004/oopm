#include<bits/stdc++.h>
using namespace std;
class company{
    public:
    void companyclass(){
        cout<<"This is company"<<endl;
    }
};
class manager{
    public:
    void managerclass(){
        cout<<"This is manager"<<endl;
    }
};
class employee:public company, public manager{
    public:
    void employeeclass(){
        cout<<"this is employee"<<endl;
    }
};
int main(){
    employee e;
    e.companyclass();
    e.managerclass();
    e.employeeclass();

    return 0;
}