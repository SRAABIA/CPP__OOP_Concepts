// C++ program to demonstrate the working of friend class
#include <iostream>
using namespace std;
class CLassB;
class ClassA {
    private:
        int numA;
        friend class ClassB;
    public:
        ClassA() : numA(12) {}
        void display(){
        	cout<<"\nhello world"<<endl;
		}
};
class ClassB {
    private:
        int numB;
    public:
        ClassB() : numB(13) {}
    int add(){
        ClassA objectA;
        return objectA.numA + numB;
    }
     void display(){
        	cout<<"\nnever give up!!!"<<endl;
	}
};
int main() {
    ClassB objectB;
    cout << "Sum: " << objectB.add();
    objectB.display();
    objectB.ClassA::display(); 
    
    // virtual dal k bhe nahi chal raha
    // ughhhhhh
    /*
    Class A is not a base of class B 
	*/
    return 0;
}
