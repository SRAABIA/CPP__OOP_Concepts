#include<iostream>
using namespace std;
template<typename T,typename U>
void print(const T&a, const U&b){
    cout<<((a>b)?a:b)<<endl;
}
int main(){
    print(4,5.5);
    print(3.2,1);
}