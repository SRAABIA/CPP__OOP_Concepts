#include<iostream>
using namespace std;
int main(){
	int size;
	int*ptr;
	cout<<"Enter size of array: ";
	cin >> size;
	
	ptr = new int[size];
	for(int i=0; i<size; i++){
		cout<<endl<<"enter value "<<i<<": ";
		cin>> ptr[i];
	}
	for(int i=0; i<size; i++){
		cout<<"value "<<i<<": "<<ptr[i]<<endl;
	
	}
	return 0;
	
}