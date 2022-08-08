#include<iostream>
using namespace std;
class complex{
    int real;
    int image;
    public:
    complex(){}
    complex(int a , int b){
        real = a;
        image = b;
    }
    complex operator+(const complex & obj){
        complex t;
        t.real = real+obj.real;
        t.image = image + obj.image;
        return t;
    }
    complex operator+(int a){
        complex t;
        t.real = real+a;
        t.image = image ;
        return t;
    }
    friend  complex operator + (int lhs, const complex&obj);
    ostream& operator <<(ostream & os  ){
        os<<"  "<<endl<< "(" << real << "," << image << ")";
        return os;
    }
    void out(){
        cout<<endl<<" ( "<<real<<" , "<<image<<" )";
    }
    
};

complex operator + (int lhs, const complex&obj){
        complex t;
        t.real = lhs+obj.real;
        t.image = obj.image;
        return t;
    }
int main(){
    complex c1(2,3);
    complex c2(9,8);
    complex c3 =  c1 + c2;
    c3.out();
    complex c4 = c1 + 4;
    c4.out();
    complex c5 = 6 + c2;
    c5<<cout;
}