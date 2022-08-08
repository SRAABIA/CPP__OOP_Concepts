#include<iostream>
using namespace std;
int main(){
	int n1,n2,result;
	cout<<"enter n1 value ";cin>>n1;
	cout<<"enter n2 value ";cin>>n2;
	try{
		if(n2==0){
		throw 'a';
		}
		else{
			result=n1/n2;
			cout<<"result is "<<result<<endl;
		}
	}
	catch(int ex){
		cout<<"can't divide "<<ex<<endl;
	}
	catch(...){
		cout<<"Unknown"<<endl;
	}
	cout<<"program end"<<endl;
}