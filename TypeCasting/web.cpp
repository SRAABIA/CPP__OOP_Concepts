//#include "stdafx.h"
#include<iostream>


using namespace std;

class Shape
{
public:
    virtual void fun()
   {
	   cout<<"in base"<<endl;
   }
};

class Square:public Shape
{
	public:
   void fun()
   {
	   cout<<"in Square"<<endl;
   }
   
};

class Circle:public Shape
{
	public:
   void fun()
   {
	   cout<<"in Circle"<<endl;
   }
void notfun(){
   	cout<<"\nyeah not fun\n";
   }

};

int main()
{
	//Create a Shape pointer which points to a new Circle
	// Note: Because a Circle IS a Shape the pointer will be OK
	Shape *shape = new Circle();
	shape->fun(); // will output "in Circle" NOT "in Base"! Explanation in main post	

	// Now let's attempt to cast the Shape pointer (shape) to a Square pointer
	// This should fail because the shape points to an instance of a Circle NOT a Square
	Square *square = dynamic_cast<Square*>(shape);
	if(square )
		square ->fun(); // Won't be called
	else // this will:
		cout << "Unable to convert the Shape* to a Square* !" << endl;

	// Now lets try casting shape to a Circle*
	// This should succeed because the Shape pointer sh points to a Circle!
	Circle *circle = dynamic_cast<Circle*>(shape);
	if(circle)
		circle->fun(); // will output "in Circle"
	else
		cout << "Unable to convert from Shape* to Circle*!" << endl;
		
	return 0;
}