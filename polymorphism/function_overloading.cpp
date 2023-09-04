#include<iostream> 
using namespace std;
class parent{
    public:
    int add(int a, int b){
        return a+b;
    }
    int add(int a,int b, int c){
        return a+b+c; 
    }
};
int main(){
    parent p;
   
   cout<<p.add(2,4)<<endl;

   cout<<p.add(2,4,6)<<endl;

    return 0;
}