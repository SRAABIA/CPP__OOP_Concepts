#include<iostream>
using namespace std;
class base{
    public:
    virtual void print(){
      cout<<"\nthis is base class fun";
    }
    void display(){
      cout<<"\nthis is base class display";
    }
};
class derived: public base{
    public:
    void print(){
        cout<<"\nthis is derived class fun";
    }
    void display(){
      cout<<"\nthis is derived class display";
    }
};
int main(){
    base *bptr;
    derived d;
    bptr = &d;
    bptr -> print();	//why not base? bcz of virtual
    bptr -> display(); 
}