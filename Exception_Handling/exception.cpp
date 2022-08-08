#include<iostream>
using namespace std;
class Try{
	public:
		void meth();	
};
void Try::meth(){
	try{
		int a=10;
		double b=10;
		int result = a-b;
		if(result==0)
		throw(b);
		else 
		cout<<(100/result);
	}
	
	catch(int b){
			cout<<"\nClass : int type\n";
	}
	catch(double b){
		char f = 'o';
		throw (f);
	}
	

	
	}
int main(){
	Try obj;
	try{
		obj.meth();
		
	}
	catch(int c){
		cout<<"\nexception : int type\n";
	}
	catch(double n){
		cout<<"\nDOUBLE";
	}
	catch(char l){
		cout<<"\nClass : CHAR type\n"<<l;
	}	
	catch(...){
		cout<<"default";
	}
	

}
