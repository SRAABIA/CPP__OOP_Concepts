#include<iostream>
#include<string>
using namespace std;

int main(){
    char arr[5];
    try{
	 	for(int n=0;n<=6;n++){
	 		if(n>4){
	 			cout<<"\nlol";
	 		throw string("out-of-range");
	 		
			}
	 		else 
	 		arr[n]='a';
	 		cout<<endl<<arr[n];
	 }
	 
 }
 catch(string st){
 	cout<<"\nException Caught: "<<st;
 }

}
