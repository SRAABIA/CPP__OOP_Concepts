
#include<cctype>
#include<string>
#include<iostream>
using namespace std;
bool isnum(string);
int main(){
	string item;
	while(1){
	
	cout<<"enter an integer: ";
	cin>>item;
	if (isnum(item)){
		cout<<"An integer is entered"<<endl;
	}
	else
	cout<<"Not an integer"<<endl;
	}
}
bool isnum(string s){
	for(int i=0;i<s.size();i++){
		if(!isdigit(s[i]))
		return false;	
	}
	return true;
}