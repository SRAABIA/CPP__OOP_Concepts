#include<iostream>
using namespace std;
template<class T>
void function(T a){
    cout<<"\nHello World: "<<a;
}

template<>void function <int>(int a){
    cout<<"\nHello World: "<<a;
}
template<class T,class U>
void function(T a,U b){
    cout<<"\nHello World: "<<a;
    cout<<"\tHello World: "<<b;

}
template<class T>
void function(T a,T b){
    cout<<"\nthis "<<a<<"\t"<<b;
}

int main(){
    function(10);
    function('a');
    function("ummm");
    function("string",10);
    function("string","it is");

}