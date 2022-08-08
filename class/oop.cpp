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
	}
		Student(int r=11, string n="XYZ", int a=999){
		roll=r;
		name=n;
		age=a;
	}
//	Student(int r, string n,char a){
//		roll=r;
//		name=n;
//		age=a;
//		cout<<"Here"<<endl;
//	}
void display(){
	cout<<"Roll number: "<<roll<<" Name : "<<name<<" age :"<<age<<endl;
}
};
int main(){
	Student obj(22,"RAZA Ahmed",23.5);
	obj.display();
	return 0;
}