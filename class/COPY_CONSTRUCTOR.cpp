#include<iostream>
using namespace std;

class Circle{
        double radius;
        public:
            Circle(){
                    cout<<"by default constructor";
            }
            Circle(int r ){
                    radius = r;
                    cout<<"\nparameterized constructor\n";
            }
            Circle(const Circle &obj){
                    radius = obj.radius;
                    cout<<"\ncopy constructor\n";
            }
            void setChange(int r){
                    radius = r;
            }
            void display(){
                    cout<<"\n Value of radius is:\t"<<radius;
            }
            ~Circle(){
                cout<<endl<<"Destroyed!!";
            }
};

int main(){
        Circle obj1;
        Circle obj2(5);
        Circle obj3(obj2);
        // obj2.setChange(6);
        // cout<<"\nInspect changes:"; 
        obj3.display();
        // obj1.setChange(6);
        // cout<<"\nInspect changes:";
        // Circle obj4 = obj1;
        // obj1.display();
        // obj2.display();
        // obj3.display();
        // obj4.display();
}