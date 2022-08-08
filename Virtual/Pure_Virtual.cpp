#include<iostream>
using namespace std;
class Base{
    int x;
    public:
    Base(){
        cout<<"\nDefault constructor :: BASE";
    }
    virtual void fun()=0;
    void vfun(int r){
        x=r;
        cout<<"\nvfun x = "<<x;
    }
};

class Derived: public Base{
    int m;
    public:
    Derived(){
        cout<<"\nDefault constructor :: DERIVED";
    }
    void fun(){
        cout<<endl<<"fun";
    }   
    void vfun(int r){
        m=r;
        cout<<"\n2.0 vfun m = "<<m;
    }
};

int main(){
    // about objects
        Derived d;
        d.fun();
        d.vfun(4);
        cout<<endl;
    // about pointers
        Base *ptr = new Derived();
        ptr->fun();
        ptr->vfun(3);

}