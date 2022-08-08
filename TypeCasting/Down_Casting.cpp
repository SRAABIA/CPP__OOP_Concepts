#include <iostream>
using namespace std;
class Person{};
class Employee:public Person{
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
int main(){
    // Manager *man;
    // Employee emp("Sara","Raza",1000);
    // man=(Manager*)(&emp);   //explicit downcasting 
    // man->show();
    // cout<<endl<<"Commission: "<< man->getComm()<<endl;

    // Employee *employ;
    // Manager men("New__","Last__",15000,0.2);
    // employ = &men;      //UPCASTING
    // Manager *New_Man = (Manager*)(employ);  //EXPLICIT DOWNCASTING
    // //So that we get a value for Commission
    // New_Man->show(); cout<<endl<<"Commission: "<< New_Man->getComm();

    //Learn about static cast
//	Employee e1("Rumaisa","Khan",2000);
//	Manager *m = static_cast<Manager*>(&e1);
//	if (m) cout << m->getComm();
//	else cout<<endl<<"NULL";
//	Congratulation(m);
    
    Employee e1("Rumaisa","Khan",2000);
    Manager *m = dynamic_cast<Manager*>(&e1);
     if(m) cout<<m->getComm();
    else cout<<endl<<"NULL"<<endl;
    Congratulation(m);
	
// 	Employee *ee = new Manager("Rumaisa","Khan",2000,0.5);
// 	Manager *mm = dynamic_cast<Manager*>(ee);
// 	if(mm) cout<<"commission: "<<mm->getComm()<<endl;	/* if dynamic casting went successful and we received an object's address to hold
// 	then mm pointer can point to getComm(); */
//     else cout<<endl<<"NULL"<<endl;
//     Congratulation(mm);


}