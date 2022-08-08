#include<iostream>
using namespace std;
template<class T>
void func(T i){
    cout<<"\n"<<i;
}
template<class T,class P>
void func(T i,P j){
      cout<<"\n"<<i<<" & "<<j;
}
template<>
void func(int p){
     cout<<"\nish explicit specialized function ::  "<<p;
}
int main(){
    int a = 9;
    char b = 'p';
    float c = 11.9;
    func(a);
    func(b);
    func(c,b);
    func("That is not good");
}