#include<iostream>
using namespace std;
class Student{
	public:
	int roll;
	float age;
	string name;
	Student(){
		roll=1;
		name="Default";
		cout<<"default constructor"<<endl;
	}
	Student(int r){
		roll=r;
		cout<<"Parameterized 1 "<<endl;
	}
	Student(int roll,string nm){
		this->roll=roll;
		this->name=nm;
		cout<<"parameterized 2"<<endl;
	}
//		Student(int rr=11, string nn="XYZ", int aa=999){
//		roll=rr;
//		name=nn;
//		age=aa;
//	}
//	Student(int r, string n,int a){
//		roll=r;
//		name=n;
//		age=a;
//		cout<<"Here"<<endl;
//	}
void display(){
	cout<<"Roll number: "<<roll<<" Name : "<<name<<" age :"<<age<<endl;
}
~Student(){
	cout<<"Destroy"<<endl;
}
};
int main(){
	Student obj1;
	Student obj2(8);
	Student obj3(11,"Raza");
	{
		Student obj4;
	}
	cout<<"Never give up"<<endl;

	return 0;
}