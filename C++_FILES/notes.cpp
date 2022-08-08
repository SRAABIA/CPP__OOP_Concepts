#include<iostream>
using namespace std;
int main(){
    int amount=0,total=0;
    int array[7]={5000,1000,500,100,50,20,10};
    cout<<"Enter a note: ";
    cin>>amount;
    for(int i = 0; i<7 ; i++){
        if(amount >= array[i]){
            total = (int) amount/array[i];
            cout<<endl<<"total note of "<<array[i]<<" are = "<<total;
            amount -= (total * array[i]) ;

        }
    }
}