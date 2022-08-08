#include<iostream>
using namespace std;
class Phone{
    private:
    int area=0,exchange_code=0,customer_no=0;
    public:
    Phone(int number){
        int i;
        int x=0, y=0, z=0;
        x = number%10000;
        this-> customer_no = x;
        number/=10000;
        x = number%10000;
        this-> exchange_code = x;
        number/=10000;
        x = number%1000;  
        this->area  = x;       
    }
    void enter(void){
        cout<<endl<<"your area is: "<<area;
        cout<<endl<<"your exchange_code is: "<<exchange_code;
        cout<<endl<<"your customer_no is: "<<customer_no;

    }
};
int main(){
    int a;
        cout<<"Enter your Phone number: ";
        cin>>a;
    Phone number(a);
    number.enter();
}