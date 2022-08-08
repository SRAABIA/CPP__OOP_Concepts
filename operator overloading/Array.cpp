#include<iostream>
using namespace std;
const int size = 10;
class safeArray{
    int arr[size];
    public:
    safeArray(){
        for(int i=0;i<size;i++){
            arr[i]=i+2;
        }
    }

    int& operator[](int i){
        if(i>size){
            cout<<"\nout of range";
            return arr[0];
        }
        return arr[i];
    }
};
int main(){
    safeArray ARR;
    cout<<"\nARR[9] "<<ARR[9];
    cout<<"\nARR[2] "<<ARR[2];
    cout<<"\nARR[1] "<<ARR[1];

}