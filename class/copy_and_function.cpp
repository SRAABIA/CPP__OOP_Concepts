#include<iostream>
using namespace std;
class dd{
    public:
    dd(){
        cout<<endl<<"default";
    }
    dd(const dd &t){
        cout<<endl<<"copy";
    }
    ~dd(){
        cout<<endl<<"delete";
    }
};
dd fun(dd &t){
    cout<<endl<<"Function is funny";
    return t; //will call copy constructor while returning
}
int main(){
    dd t1;
    fun(t1);
    cout<<endl<<"eop";
}