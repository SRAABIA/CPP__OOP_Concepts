#include <iostream>
using namespace std;
class BaseClass {
public:
void disp(){
cout<<"\nFunction of Parent Class";
}
};
class DerivedClass: public BaseClass{
public:
void disp() {
cout<<"\nFunction of Child Class";
}
};
int main() {
DerivedClass obj = DerivedClass();
obj.disp();
obj.BaseClass::disp();
return 0;
}