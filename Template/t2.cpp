#include<iostream>
using namespace std;
void function(int a){
    cout<<"\nHello World: "<<a<<"\tthis";
}
template<class T>
void function(T a){
    cout<<"\nHello World: "<<a;
}

int main(){
    function(10);
    function('a');
    function("ummm");
}