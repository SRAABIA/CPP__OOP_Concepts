#include<iostream> 
using namespace std;
class Animal{
	string type;
	public:
		Animal():type("Animal"){cout<<"Animal"<<endl;}
		virtual string getType()
		{
			return type;
		}
		virtual ~Animal(){cout<<"Animal Des"<<endl;}
};
class Dog: public Animal{
	string type;
	string getType(){
			return type;
		}
	public:
		Dog():type("Dog"){cout<<"Dog "<<endl;}
		~Dog(){cout<<"Dog Des"<<endl;}
};
class Cat: public Animal{
	string type;
	string getType(){
			return type;
	}
	public:
	Cat():type("Cat"){cout<<"Cat "<<endl;}
	~Cat(){cout<<"Cat Des"<<endl;}
	
};
void print(Animal*ani){
	cout<<endl<<"Animal: "<<ani->getType()<<endl<<endl;
}
int main(){
	Animal *animal1=new Animal();
	Animal *dog1=new Dog();
	Animal *cat1=new Cat();
	// print(animal1);
	// print(dog1);
	// print(cat1);
    // cout<<endl;
    // cout<<animal1->getType();
    // cout<<endl;
    // cout<<dog1->getType();
    // cout<<endl;
    // cout<<cat1->getType();
    // cout<<endl;
	delete cat1;
    cout<<endl;

    delete dog1;
    cout<<endl;

    delete animal1;
	return 0;
}
