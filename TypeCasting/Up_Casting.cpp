#include <iostream>
using namespace std;
class Person{};
class Employee : public Person{
public:
	string FirstName;
	string LastName;
	double salary;
	Employee(){	}
	Employee(string fName, string lName, double sal){
    	FirstName = fName;
    	LastName = lName;
    	salary = sal;
	}		
	virtual void show(){
		cout << "First Name: " << FirstName << " Last Name: " << LastName << " Salary: " << salary<< endl;
	}
	void addBonus(double bonus){
    	salary += bonus;
	}
};
class Manager :public Employee{
	double Commision;
	public:
	Manager(){}
	Manager(string fName, string lName, double sal, double comm) :Employee(fName, lName, sal){
		Commision = comm;
	}
	double getComm(){
		return Commision;
	}
};
class Clerk :public Employee{
	Manager* manager;
	public:
		Clerk(string fn, string ln, double sal,Manager* man ):Employee(fn,ln,sal){
		manager=man;
		}
		Manager* getManager(){
			return manager;
		}
};
	//One of the biggest advantages of upcasting is the capability of writing generic functions 
	//for all the classes that are derived from the same base class. 
	//Look at an example:
void Congratulation(Employee *ani){
	cout<<"Happy New Year"<<endl;
	ani->addBonus(1500);
	ani->show();
}
int main()
{
		Employee *emp;
		Manager m1("Daniyal", "Ahmed",89000, 0.25);
		emp=&m1;             //casting employee to manager 
		emp->show();    //Commission is lost here 
	cout<<endl;
		// Congratulation(&m1);    //Successfully incremented
	cout<<endl;
		Clerk c1("Raza","XYX",56000,&m1);
		// c1.show();
	cout<<endl;
		Congratulation(&c1);
	cout<<endl;
		// cout<<c1.FirstName<<c1.getManager()->FirstName;
	cout<<endl;
		// //try to cast an employee to Manager
		Employee *empp;
		Manager mm("Farah","sadia",75000,0.5);
		empp=&mm;
		// empp->show();
    
}


