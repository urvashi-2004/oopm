//If you want others to read or modify the value of a private member, you can provide public get and set methods

#include<bits/stdc++.h>
using namespace std;
class employee{
    private:
    int salary;

    public:
    string name;
    void setsalary(int s){
        salary=s; 
    }
    void getsalary(){
        cout<<salary;
    }
};
int main(){
    employee e;

    e.name="urvashi";
    cout<<e.name<<endl;
    
    e.setsalary(50000);
    e.getsalary();

    return 0;

}