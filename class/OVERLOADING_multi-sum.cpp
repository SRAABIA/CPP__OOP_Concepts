#include<iostream>
using namespace std;
int sum(int , int);
int sum(int, int , int);
int main(){cout<<sum(1,2); cout<<endl; cout<<sum(1,2,3);}
int sum(int x, int y){return x+y;}
int sum(int x, int y, int z){return x+y+z;}
