#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=10;
    int* b;
    b=&a;
    cout<<"address of a "<<setw(4)<<&a<<endl;
    cout<<"address of a "<<setw(4)<<*b<<endl;
    cout<<"the value at a using pointer<<b<<endl;
    return 0;
    
}