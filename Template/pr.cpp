#include<iostream>
using namespace std;
template<class T,class U = double>
class Temp{
    int a;
    U ap;
    public:
    Temp(){
        a=10;
        ap=2.9;
    }
    void dis(){
        cout<<a<<"\n"<<ap;
    }
};
int main(){
    Temp<int>obj;
    obj.dis();
    
}