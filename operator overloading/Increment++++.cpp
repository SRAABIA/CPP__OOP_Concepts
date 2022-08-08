#include<iostream>
using namespace std;
class inc{
    int a;
    public:
    inc(){
        a = 4;
    }
    inc operator++(int){
        a++;
        return *this;
    }
    inc operator++( ){
        a++;
        return *this;
    }
    friend ostream& operator<<(ostream&, inc&);
};
ostream& operator << (ostream& os, inc&obj){
    os<<"a is  "<<obj.a;
}
int main(){
    inc a ;
    ++a;
    cout<<a;
    a++;
    cout<<a;
    ++a;
    cout<<a;
}