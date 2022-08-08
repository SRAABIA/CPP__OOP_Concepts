#include<iostream>
using namespace std;
template<class T> 
class A {
   public:
      void f(T a){
      	cout<<"a "<<a<<endl;
	   }
      void t();
};
template<> 
class A<int> {
   public:
      int g(int);
};
int A<int>::g(int arg) { 
   cout<<"Okay "<<arg<<endl;
   return 0; }

void A<char> :: t(){}

int main() {
   A<int> a;
   a.g(1234);
   A<double> a1;
   a1.f(8899);
}