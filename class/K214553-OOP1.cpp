#include<iostream>
using namespace std;
class student{
    string name,department_name;
    int id, subjects[6]={100};
    int marks_obtained[6]={0};
    int total_marks;
    
    public:
    /*SETTERS*/
    void setter_name(string n){
        name=n;
    }
    void setter_dep_name(string d){
        department_name=d;
    }
    void setter_id(int a){
        id=a;
    }
    void setter_subjects(int a, int b){
        subjects[a]=b;
    }
    void setter_marks(int a, int b){
        marks_obtained[a]=b;
    }
    void setter_total_marks(int x){
        total_marks=x;
    }
    /*GETTERS*/
    string getter_name(){
        return name;
    }
    string getter_dep(){
        return department_name;
    }
    int getter_id(){
        return id;
    }
    int getter_sub1(){
        return subjects[0];
    }
    int getter_sub2(){
        return subjects[1];
    }
    int getter_sub3(){
        return subjects[2];
    }
    int getter_sub4(){
        return subjects[3];
    }
    int getter_sub5(){
        return subjects[4];
    }
    int getter_sub6(){
        return subjects[5];
    }
    int getter_marks1(){
        return marks_obtained[0];
    }
    int getter_marks2(){
        return marks_obtained[1];
    }
    int getter_marks3(){
        return marks_obtained[2];
    }
    int getter_marks4(){
        return marks_obtained[3];
    }
    int getter_marks5(){
        return marks_obtained[4];
    }
    int getter_marks6(){
        return marks_obtained[5];
    }
    int getter_total_marks(){
        return total_marks;
    }
    void input(){
        string snam,myname;
        int x,i,arr[6]={0},ari[6]={0},sum=0,sum2=0;
        cout<<endl<<"Enter Name: ";
        getline(cin,myname);
        setter_name(myname);
        cout<<endl<<"Enter Dep. Name: ";
        getline(cin,snam);
        setter_dep_name(snam);
        cout<<endl<<"Enter ID: ";
        cin>>x;
        setter_id(x);
        cout<<endl<<"****** OBTAINED MARKS? ******"<<endl;
        for(i=0;i<6;i++){
            cout<<endl<<"Enter Obtained Marks for subject "<<i+1<<": ";
            cin>>arr[i];
            //sum+=arr[i];
            setter_marks(i,arr[i]);
        }
        cout<<endl<<"****** TOTAL MARKS? ******"<<endl;
        for(i=0;i<6;i++){
        cout<<endl<<"Enter Total Marks for subject "<<i+1<<": ";
            cin>>ari[i];
            sum2+=ari[i];
            setter_subjects(i,ari[i]);
            }
        setter_total_marks(sum2);
    }
    void Percentage_And_Grade(){
        int i,sum=0;
        for(i=0;i<6;i++){
            sum += marks_obtained[i];
        }
        float percentage;
        int total = getter_total_marks();
        percentage = ((float)sum/total)*100;
        cout<<endl<<endl<<"***********************************"<<endl;
        cout<<endl<<"Name :             "<<name;
        cout<<endl<<"ID :               "<<id;
        cout<<endl<<"The Percentage is: "<<percentage<<"% ";
        cout<<endl<<"The Grade is         ";
        if(percentage>0 && percentage < 51) cout<<"F";
        else if(percentage>50 && percentage < 61) cout<<"C";
        else if(percentage>60 && percentage < 70) cout<<"C";
        else if(percentage>69 && percentage < 80) cout<<"B";
        else if(percentage>79 && percentage < 90) cout<<"A";
        else if(percentage>89                   ) cout<<"A+";
        cout<<endl<<endl<<"***********************************"<<endl;
    }

};
int main(){
    int i;
        student stud;
        stud.input();
        cout<<endl<<endl<<endl;
        stud.Percentage_And_Grade();
        cout<<endl<<endl<<"***********************************"<<endl<<"Implementation of SETTER & GETTER"<<endl<<"***********************************"<<endl;
        stud.setter_name("Raabia");
        stud.setter_id(4553);
        stud.setter_dep_name("BCS");

        for(i=0;i<6;i++){
            stud.setter_marks(i,70);
            stud.setter_subjects(i,120);
        }
        stud.setter_total_marks(720);
        // cout<<endl<<"Name is: "<<stud.getter_name();
        // cout<<endl<<"Dep is: "<<stud.getter_dep();
        cout<<endl<<"Marks of Subject 1 is: "<<stud.getter_marks1();
        cout<<endl<<"Marks of Subject 2 is: "<<stud.getter_marks2();
        cout<<endl<<"Marks of Subject 3 is: "<<stud.getter_marks3();
        cout<<endl<<"Marks of Subject 4 is: "<<stud.getter_marks4();
        cout<<endl<<"Marks of Subject 5 is: "<<stud.getter_marks5();
        cout<<endl<<"Marks of Subject 6 is: "<<stud.getter_marks6();
        cout<<endl<<endl<<"Total Marks are:       "<<stud.getter_total_marks();
        stud.Percentage_And_Grade();
        cout<<endl<<endl<<endl<<endl;
} 