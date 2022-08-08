#include<iostream>
#include<exception>
using namespace std;

int main(){
	int arr[10];
	int index;
	while(1){
	
	try {
		cin>>index;
		if(index<0||index>10)
			throw out_of_range("Invalid Index");
		else 
		arr[index]=index;	
		cout<<arr[index];
	}
	
	catch(out_of_range &e){
		cout<<e.what();
	}
}
}
