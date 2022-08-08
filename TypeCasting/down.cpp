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
		virtual void show(){
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
	Employee obj("Raabia",15);
	Manager *man=(Manager*)&obj; //explicit downcasting
	man->bonus(5);
	man->show();
	cout<<man->get_com();
	
	
	
	cout<<endl<<"***********************\n"<<endl;

	Employee *emp;
	emp = new Manager("Sara",10,5); //upcasting
	Manager *may = (Manager*)(emp); //downcasting
	cout<<may->get_com();
	cout<<endl<<"***********************\n"<<endl;
	
	Manager *mak = static_cast<Manager*>(&obj); //compile time
	if(mak) Congratulation(&obj);
	else cout<<"NULL";
	
	cout<<endl<<"***********************\n"<<endl;
	Employee *empp;
	empp = new Manager("Sara",10,5);
	Manager *makk = dynamic_cast<Manager*>(empp); //run time 
	if(makk) makk->show();
	else cout<<"NULL";
	
}
