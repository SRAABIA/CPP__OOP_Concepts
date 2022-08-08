#include<iostream>
using namespace std;
template<class T, int a = 3>
class A{
    T arr[a];
    public:
    A(){
        for(int i=0;i<a;i++){
           cout<<endl<<"enter "<<i<<" : ";
           cin>> arr[i];
        }
    }
    // A(T v){
    //     arr[0]=v;
    // }
    
    T fun(T i, int q){
        cout<<"\nT: "<<i<<" A: "<<q;
        return i;
    }
    
    T fun(T i){
        cout<<"\nT: "<<i<<" A: "<<a;
        return i;
    }
    
    void fun(){
          for(int i=0;i<a;i++){
           cout<<endl<<"a ["<<i<<"] : "<< arr[i];
        }
        // cout<<"\nArr: "<<arr;
    }

};
int main(){
    A<double>aa;
    aa.fun();
    aa.fun(1.2,9);
    // aa.fun(1.5);
    // A<int,1>k(9);


}