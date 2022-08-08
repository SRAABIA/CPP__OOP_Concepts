#include<iostream>
using namespace std;
class Student{
	int rollNo;
	public:
	void setRollNo(int aNo){
		rollNo=aNo;
	}
	int getRollNo(){
		return rollNo;
	}
 };
int main(){
	Student aStudent;
 	aStudent.setRollNo(5);
 	cout<<aStudent.getRollNo()<<endl;

 	Student *ptr_student = new Student;
 	ptr_student->setRollNo(9);
 	cout<<ptr_student->getRollNo()<<endl;
	 
	 Student *ptr_student1 = new Student;
 	(*ptr_student1).setRollNo(100);
 	cout<<ptr_student1->getRollNo()<<endl;	
	return 0;
}
