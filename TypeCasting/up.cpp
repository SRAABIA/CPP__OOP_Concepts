#include<iostream>
using namespace std;
class Person{

};
class Employee :public Person{
	public:	
	string f_name;
	double salary;

	Employee(string f_name, double sal):f_name(f_name){
		salary = sal;
	}
		void show(){
			cout<<"\nName: "<<f_name<<endl<<"Salary: "<<salary<<endl;
		}
		void bonus(double bon){
			salary+=bon;
		}
};
class Manager : public Employee{
	double Commission;
	public:
		Manager(string f_name, double sal,double comm): Employee(f_name,sal){
			Commission=comm;
		}
		double get_com(){
			return Commission;
		}
};
class Clerk :public Employee{
	Manager* manager;
	public:
		Clerk(string f_name, double sal,Manager* man ):Employee(f_name,sal){
		manager=man;
		}
		Manager* getManager(){
			return manager;
		}
};
void Congratulation(Employee *ani){ //pointer of base class will get address of any of the either child class or its own
	cout<<"Happy New Year"<<endl;
	ani->show();
}
int main(){
	Employee *emp;
	Employee obj("Raabia",120000);
	emp=&obj;
	emp->bonus(5);
//	emp->show();
//	Congratulation(&obj);
// 	Congratulations(emp);
	
	Manager objj("Muniba",1500,400);
	emp=&objj;
	emp->bonus(10);
//	emp->show();
//	Congratulation(&objj);
	Clerk clrk("Ayesha",1000,&objj);
//	clrk.show();
	emp=&clrk;
	emp->bonus(4);
//	emp->show();
//	Congratulation(&clrk); 
//	clrk.getManager()->show();
}
