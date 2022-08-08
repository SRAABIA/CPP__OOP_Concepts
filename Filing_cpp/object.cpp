#include<iostream>
#include<fstream>
using namespace std;
class Stu{
    int num;
    char name[9];
    public:
    void get_data(){
        cout<<"\nnum: "; cin>>num;
        cout<<"\nName: "; cin.getline(name,9);
    }
    void enter(){
        fstream r("hi.txt",ios::app);
        Stu d;
        d.get_data();
        r.write((char*)&d,sizeof(d));
        r.close();
    }
    void sh(){
        cout<<"\nNum: "<<num; 
    }
    void display(){
        fstream r("hi.txt",ios::in);
        Stu d;
        cout<<endl<<"=======================";
        while(r.read((char*)&d,sizeof(d))){
           d.sh();
        }   
        r.close();
    }
};
int main(){
        Stu j;
        for(int i=0;i<3;i++){
        j.enter();
        j.display();
        }
}