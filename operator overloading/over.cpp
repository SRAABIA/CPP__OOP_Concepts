#include<iostream>
using namespace std;
class Inc{
    int a=9;
    public:
    Inc(){}
    Inc(int a):a(a){}
    Inc operator++(int){
        a++;
        return *this;
    }
    Inc operator++(){
        a++;
        return *this;
    }
    bool operator<(Inc&obj){
        if(a<obj.a)
       { cout<<obj;
       return 1;
       }
        else cout<<*this;
        return false;
    }
    bool operator<(int s){
        if(a<s) return true;
        return false;
    }
    friend bool operator<(int ,Inc&);
    friend ostream& operator<<(ostream&,Inc&);
};
ostream& operator<<(ostream&os,Inc&obj){
    os<<endl<<"A = "<<obj.a;
}
bool operator<(int s,Inc&obj){
    if(s<obj.a) return true;
    return false;
}
int main(){
    Inc f;
    f++; //post inc
    cout<<f;
    ++f; //pre inc
    cout<<f;    
    Inc d(108);
    Inc s(98);
    if(d<s){
        cout<<"\ncool";
    }
    else
     cout<<"\nstinky";
    
    if(d<5) cout<<"\ncool";
    else cout<<"\nok";

    if(5<f)cout<<"\ncool";
    else cout<<"\nok";
}