#include<iostream>
using namespace std;
class base{
    public:
    void display(){
        cout<<endl<<"BASE CLASS";
    }

};
class derived : public base{
    public:
    void display(){
        cout<<endl<<"DERIVED CLASS";
    }

};
int main(){
//     base b;
//     derived *d;
//     d = &b;
//     b.display();
//     d -> display();
    base *b;
    derived d;
    b=&d;
    d.display();
    b -> display();
    
//    can we call derived class function with BASE's pointer?
}