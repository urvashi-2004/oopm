#include<bits/stdc++.h>
using namespace std;
class student{
    
    public:
    int id;
    string name;
    int marks;
    
    student(int n, string s,int m){
       id=n;
       name=s;
       marks=m;
    }
    void display(){

       cout<<"Your id is : "<<id<<endl;
       cout<<"Your Name is : "<<name<<endl;
       cout<<"Your marks is : "<<marks<<endl;
    }
};
int main(){

    student s1(60,"Urvashi Saratkar",85);

    s1.display();

    return 0;

  }