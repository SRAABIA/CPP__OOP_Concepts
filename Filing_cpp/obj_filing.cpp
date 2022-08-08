#include<iostream>
#include<fstream>
using namespace std;
class Yes{
    int who;
    char ok[5];
    static int cc;
    public:
    Yes(){ }
    void dis(){
        cout<<endl<<ok<<"\t"<<who;
    }
    void get_Data(){
        cout<<"\nw: "; cin>>who;
        cout<<"s: "; cin>>ok;
    }
    void add(){
        fstream f("test.txt",ios::app);
        Yes no;
        no.get_Data();
        f.write((char*)&no,sizeof(no));
        f.close();
    }
    void Display(){
        Yes ok;
        fstream ofc("test.txt",ios::in);
        cout<<"WHO   ||OK";
        while(ofc.read((char*)&ok,sizeof(ok))){
            ok.dis();
        }
        ofc.close();
    }
};
int Yes :: cc = 0 ;
int main(){
    Yes y;
   for(int i=0;i<2;i++){
       y.add();
       
   }
   y.Display();
}