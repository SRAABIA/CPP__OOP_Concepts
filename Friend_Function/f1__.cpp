// program to demonstrate the working of friend function
#include <iostream>
using namespace std;
class Distance {
    private:
        int meter;
        // friend function
        friend int addFive(Distance);
        friend void add6(Distance&);
    public:
        Distance() : meter(0) {}
        void display(){
        	cout << "Distance: " <<meter<<endl;
		}
};
// friend function definition
int addFive(Distance d) {
    //accessing private members using class objects from the friend function
    d.meter += 5;
    return d.meter;
}
void add6(Distance &d) {
    //accessing private members from the friend function
    d.meter += 6;
    //return d.meter;
}
int main() {
    Distance D;
    cout << "Distance: " << addFive(D); //this function works on local data member
    cout<<endl; D.display();    //  <-that's why we won't get any output
    Distance d1;
    add6(d1);
    d1.display();
    return 0;
}
