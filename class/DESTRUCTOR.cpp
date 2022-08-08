#include<iostream>
using namespace std;
class A{
	int a;
	int *b;
	public:
	A(){
		b=new int;
		cout<<"default const"<<endl;
	}
	~A(){
		if(b==NULL)cout<<"Others"<<endl;
		else {
			delete b;
		cout<<"DMA destroyed"<<endl;}
cout<<"Destructed"<<endl;
	}
};
int main(){
	// A obj;{
	// A obj1;
	// }
	A *p;
	p = new A();
	delete p; //destructor for A wont be called unless i have deleted p;
	
	// cout<<"Never Give UP!!!"<<endl;
	
}