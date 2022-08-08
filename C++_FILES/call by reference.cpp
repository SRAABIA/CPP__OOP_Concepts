#include<iostream>
using namespace std;
void swap(int&a,int&b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
	int x=4,b=6;
	cout<<"x is: "<<x<<" b is: "<<b<<endl;
	swap(x,b);
	cout<<"x is: "<<x<<" b is: "<<b;
}