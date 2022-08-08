#include <iostream>
using namespace std;
class Base
{
   
protected:
    int x;

public:
    Base(int i)
    {
        x = i;
        cout << "Constructor of base called\n";
    }
     virtual void show()=0;
   // void show() { cout << "Hello World" << endl; }//cant be overloaded
    virtual ~Base(){
        cout<<"\nfine???";
    }
};
class Derived : public Base
{
    int y;
    void show(){
        cout<<"Never GiveUp!"<<endl;
    }
public:
    Derived(int i, int j) : Base(i) { y = j; 
        cout << "Constructor of Derived called\n";
    }
    void fun() { cout << "x = " << x << ", y = " << y<<'\n'; }
    ~Derived(){
        cout<<"\nok??";
    }
};
int main(void)
{
    // 	Base obj;
    // Derived d(4,5);
    // d.fun();
    // d.show();
    // d.Base::show();

        Base *ptr=new Derived(6,7);
        // ptr->fun();
        ptr->show();
        // ptr->
        // Derived *pointer = new Base; // Not possible since it is Abstract Class
    
    delete ptr;

    return 0;
}