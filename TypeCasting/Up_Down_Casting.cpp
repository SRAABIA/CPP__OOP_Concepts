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
int main()
{
	//Downcasting is an opposite process for upcasting. 
	
	//It converts base class pointer to derived class pointer. 
	
	//Downcasting must be done manually. It means that you have to specify explicit typecast.
	
	
//	Employee e1("Daniyal","Khan",75000);
//	Manager *m1=(Manager*)(&e1);
//	cout<<m1->getComm()<<endl;
//	m1->show();
	
//	Employee *emp;
//	Manager m1("Fatima","Faisal",82000,0.25);
//	emp=&m1;
//	Manager *m2=(Manager*)(emp);
//	cout<<m2->getComm()<<endl;
//	m2->show();
	
//	Employee e1("Daniyal","Khan",75000);
//	Manager *m1=static_cast<Manager*>(&e1);
//	cout<<m1->getComm()<<endl;
	
//	Employee e1("Daniyal","Khan",75000);
//	Manager *m1=dynamic_cast<Manager*>(&e1);
//	if(m1)
//	cout<<m1->getComm()<<endl;
//	else
//	cout<<"Can't convert"<<endl;

// 	Employee* emp1;
// 	Manager m_1("Daniyal", "Khan", 3000, 0.2);
// 	emp1 = &m_1;
// 	Manager* m_2 = (Manager*)(emp1);
// //	cout<<m_2->getComm();
// 	Congratulation(&m_1);
// 	Congratulation(m_2);
	
	
	cout<<"_____________________________________________________"<<endl;
//	
//	Employee emp1("abc","xyz",10000);
//	Manager m_1("Daniyal", "Khan", 3000, 0.2);
//	Manager* m_2 = (Manager*)(&emp1);
//	cout<<m_2->getComm()<<endl;
//	m_2->show();
	
	Employee e1("Asma", "Shah", 1400);
	//try to cast an employee to Manager
	Manager* m_3 = (Manager*)(&e1);
	cout << m_3->getComm() << endl;
	Congratulation(m_3);
//	
//	
//	//dynamic_cast is an operator that converts safely one type to another type. 
//	//In the case, the conversation is possible and safe, it returns the address 
//	//of the object that is converted. Otherwise, it returns nullptr.
//	
	Employee e4("Faisa", "Abshar", 1400);
	Manager* m4 = static_cast<Manager*>(&e4);
	
	//In this case, the dynamic cast returns nullptr. 
	//Therefore, you will see a warning message.
	if (m4)
 		cout << m4->getComm() << endl;
	else
 		cout << "Can't  cast from Employee to Manager" << endl;
	
	Employee *emp;
	Manager mm("Faisa", "Abshar", 1400,0.5);
	emp=&mm;
	Employee* m4 = static_cast<Employee*>(&mm);
	
	//In this case, the dynamic cast returns nullptr. 
	//Therefore, you will see a warning message.
	if (m4)
 		cout << m4->getComm() << endl;
	else
 		cout << "Can't  cast from Employee to Manager" << endl;

	

}
