#include<iostream>
#include<fstream>
using namespace std;
class hp{
    int a;
    public:
    hp(){
        a=10;
    }
    void print(){
        cout<<endl<<a;
    }
};
class lap: public hp{
    int a;
    public:
    lap(){
        a=11;
    }
    void print(){
        cout<<endl<<a;
    }
};
class m:public hp{
    int p;
    public:
    m(){
        p=9;
    }
     void print(){
        cout<<endl<<p;
    }
};
int main(){
    hp obj,obj2;
    lap pp;
    m xx;
    fstream f("read.txt",ios::app);
//     f.write((char*)&obj,sizeof(obj));
//     f.write((char*)&pp,sizeof(pp)); 
     f.write((char*)&xx,sizeof(xx));
//     f.write((char*)&obj2,sizeof(obj2));
     f.close();
     f.open("read.txt",ios::in);
    while(f.read((char*)&xx,sizeof(xx))!=NULL){
        obj.print();
    }
     f.close();
}
