#include<iostream>
using namespace std;
class print{
    public:
       int x=10;
       int y=5;
    
    friend void print_variable(print& obj);

};
void print_variable(print& obj){
    
    cout << obj.x * obj.y << endl;
}
int main(){
    print obj1;

    print_variable(obj1);
    
    return 0;
}


