#include<iostream>
using namespace std;
class Animal{
    // protected:
    string type;
    public:
    Animal(): type("Animal"){
        
        cout<<"\nDefault constructor :: Animal";

    }
    virtual string gettype(){
        return type;
    }
    virtual void sound(){
        cout<<endl<<"I don't know my sound :( ";
    }

    
    virtual~ Animal(){
        cout<<endl<<"Des Ani";
    }
};
class Dog : public Animal{
    // protected:
    string type;
        string gettype(){
        return type;
    }
    public:
    Dog():type("Dog"){
        cout<<"\nDefault constructor :: Dog";
    }

    void sound(){
        cout<<endl<<"Woof Woof!!";
    }
    ~Dog(){
        cout<<endl<<"Des Doggy";
    }
};
class Cat : public Animal{
    string type;
        string gettype(){
        return type;
    }
    public:
    Cat():type("Cat"){
        cout<<"\nDefault constructor :: Cat";
    }   

    void sound(){
        cout<<endl<<"Meow Meow!!";
    }
    ~Cat(){
        cout<<endl<<"Des Catty";
    }
};
int main(){
    Animal *ptr = new Animal();
    Animal *ptr2 = new Dog();
    Animal *ptr3 = new Cat();

    cout<<endl<<ptr->gettype();
    cout<<endl<<ptr2->gettype();
    // cout<<endl<<ptr3->gettype();

    ptr->sound();
    ptr2->sound();
    // ptr3->sound();

    delete ptr;
    delete ptr2;
    delete ptr3;

    cout<<endl<<"-----bi bi-----";
}