#include<iostream>
using namespace std;
class student{
    // double q;
    int id;
    string name;
    int age;
    
    public:
    student(){  /* CONSTRUCTOR USAGE */
        id = 99;
        name = "default";
        age = 22;
    }
    // void input(){
    //     cout<<endl<<"id: ";
    //     cin>>id;
    //     cout<<"name: ";
    //     fflush(stdin);
    //      getline(cin,name);
    //     //cin>>name;
    //     cout<<"age: ";
    //     cin>>age;
    // }
    void display(){
        cout<<endl<<id<<endl<<name<<endl<<age;
    }
    // void setter_of_id(int iid){
    //     id = iid;
    // }
};
int main(){
    student s1, s2;
    cout<<"size of string: "<<sizeof(string)<<endl;    
    cout<<"size of int: "<<sizeof(int)<<endl;  
    cout<<"size of float: "<<sizeof(float)<<endl;  
    cout<<"size of double: "<<sizeof(double)<<endl;  

    cout<<"size of s1: "<<sizeof(s1)<<endl;     /*32 y g*/
    // cout<<"size of s2: "<<sizeof(s2)<<endl;
    //student*s3=new student();
    //cout<<"size of s3: "<<sizeof(s3)<<endl;
   // s3->input();
   // (*s3).display();
    // s1.input();
    s1.display();
    // s2.input();
    //s2.display();

}