#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char ch;
    fstream oa("yes.txt",ios::out);
    for(int i =0;i<5;i++){
        cout<<":: "; cin>>ch;
        oa.put(ch);
    }
    oa.close();
    string s;
    fstream ob("yes.txt",ios::in);
    while(!ob.eof()){ //Don't use !ob.eof() as it will read last word twice
        getline(ob,s);
        cout<<s;
    }
    ob.close();
}
