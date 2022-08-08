#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=10;
    int* b;
    b=&a;
    cout<<"address of a "<<setw(6)<<&a<<endl;
    cout<<"address of a "<<setw(6)<<b<<endl;
    cout<<"the value at a using pointer "<<*b<<endl; 
    int**c=&b;
    cout<<"Address of b: "<<&b<<endl;
    cout<<"Address of b: "<<c<<endl;
    cout<<"Value @ b: "<<**c<<endl;
    cout<<"so what is *c= "<<*c;
    return 0;
    
}