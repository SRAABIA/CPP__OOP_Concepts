#include<iostream>
using namespace std;
class C{
    int a;
    public:
    C& set_d(int a){
        this->a = a;
        return *this;   // SINCE THIS IS A POINTER IT IS POINTING TO A AND ITS VALUE CAN BE RETURNED
    }
    // void set_d(int a){
    //     this->a = a;
    //    // return *this;
    // }
    void print(){
        cout<<"\na is: "<<a;
    }
};
int main(){
    C a,b;
    b=a.set_d(1);
    b.print();
    //or we can write
    a.set_d(55).print();
}