#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1 = {1,2,3};
    cout<<v1[1]<<endl;
    cout<<v1.front()<<endl;
    cout<<v1.back()<<endl;
    cout<<v1.size()<<endl;
    v1.push_back(9);
    v1.push_back(2);
	v1.push_back(5);
    v1.push_back(2);
	v1.push_back(5);
	cout<<v1.capacity()<<endl;
    cout<<v1.size()<<endl;
    
}