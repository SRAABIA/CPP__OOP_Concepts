#include<iostream>
using namespace std;
int main(){
	int a=1;
	try{
		try{
			throw a;
		}
		catch(int x){
			cout<<"Exception is inner try catch\n"<<endl;
			throw 'c';
		}
	}
	catch(int x){
		cout<<"Exception is Outer try catch"<<endl;
	}
}
