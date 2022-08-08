#include <iostream>
using namespace std;
class raabiaistic
{
    string name;
    int age;
    string favourite_line;
    char a;

public:
    raabiaistic(){
        name = "raabia";
        age = 100;
        favourite_line="sup??";
        a=3;
       
    }
    void display(){
        cout<<endl<<"name: "<<name<<endl<<"age: "<<age<<endl<<"favourite line: "<<favourite_line;
        cout<<a;
    }

};

int main()
{
    raabiaistic rabi;
    rabi.display();
}