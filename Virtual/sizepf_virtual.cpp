#include<iostream>
using namespace std;
class A{
	public:
		virtual void display(){
		}
};
class B: public A{
	public:
		virtual void display(){
		}
};
int main(){
	B obj;
	cout<<endl<<sizeof(obj);
// VPTR pointer is created when any function is virtaul in class
    A ob;
	cout<<endl<<sizeof(ob);

	return 0;
}