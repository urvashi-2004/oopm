#include <iostream>  
using namespace std;  
class employee{  
   public:  
    int x;  
    employee(int a)                
    {  
      x=a;  
    }  
    employee(employee &i)               
    {  
        x = i.x;  
    }  
};  
int main(){

    employee a1(20);     

    employee a2(a1);    

    cout<<a2.x;  
    
    return 0;  
}  