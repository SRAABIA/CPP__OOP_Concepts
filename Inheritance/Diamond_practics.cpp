#include<iostream>
using namespace std;
class Student{
    int a;
    public:
    Student(int a):a(a){
    cout<<"\nStudent Parameterized "<<a;
    }
    Student()
    {cout<<"\nStudent Default ";
    }
};
class Teacher:  public Student{
    int c;
    public:
    Teacher(){
        cout<<endl<<"Teacher Default";
    }
    Teacher(int a):Student(a){
        cout<<endl<<"Teacher Parameterized " ;
    }
};
class Assist:  public Student{
    int y;
    public:
    Assist(){
        cout<<endl<<"Assist Default";
    }
    Assist(int b):Student(b){
        cout<<endl<<"Assist Paramterized ";
    }
};
class TA:public Teacher,public Assist{
    // int g;
    public:
    TA(){
        cout<<endl<<"TA default";
    }
    TA(int b):Teacher(b),Assist(b){
    // TA(int b):Teacher(b),Assist(b){
            cout<<endl<<"TA parameterized";
    }
};
int main(){
    // TA obj;
    TA obj1(4);
}