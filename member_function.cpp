#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    student(){
        cout<<"default constructor is called"<<endl;
    }

    ~student(){
        cout<<"destructor is called";
    }

    int multi(int x, int y){
      return x*y;
    }
  };
  int main(){
    student s;
    
    cout<<s.multi(10,20)<<endl;

    return 0;
  }