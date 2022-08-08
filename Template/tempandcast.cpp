#include<iostream>
using namespace std;
template <class T,class U>
class Person{
	T name;
	U age;
	public:
		Person(){
		}
		Person(T a,U b){
			name=a;
			age=b;
		}
		void display(){
			cout<<"\nName=\t"<<name;
			cout<<"\nAge=\t"<<age;
		}
};
template <class Y,class Z,class T ,class U>
class Manager:public Person< T, U>
{
	Y salary;
	Z commision;
	public:
	Manager():Person<string,int>(){
	}
	Manager(Y b, Z com, T a, U c):Person<string,int>(a,c){
		salary=b;
		commision=com;
	}
	void cal(int a){
		commision=salary+a;
	}
	void display(){
		cout<<"Salary="<<salary;
	}
	template<class X>
	void cal(X a){
		commision=salary+a;
	}
	Z get_commision(){
		return commision;
	}
};
void show(Person <string,int>*p){
	p->display();
}
int main(){
	// Person <string,int>*p;
	Manager <int,float,string,int> m(20000,1.5,"Wara",19);
	m.display();
	// p=&m;
	// show(p);    
}