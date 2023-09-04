#include <bits/stdc++.h>
using namespace std;
class abstract{
private:
    string name;
    int marks;

    public:
    void set(string n, int m)
    {
        name=n;
        marks=m;
    }
    void print(){
        cout<<"name : "<<name<<endl;
        cout<<"marks : "<<marks<<endl;
    }
};
int main(){
    abstract ab;

    ab.set("urvashi",90);

    ab.print();
    
    return 0;
}