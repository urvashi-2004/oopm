#include<bits/stdc++.h>
using namespace std;
class answer{
    private:
    int number;

    public:
    void set(int x){
        number=x;
    }
    void get(){
        cout<<number<<endl;
    }
};
int main(){
    answer ans;
    
    ans.set(98);
    ans.get();

    return 0;
}