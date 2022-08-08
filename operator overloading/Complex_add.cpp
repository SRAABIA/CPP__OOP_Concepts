#include<iostream>
using namespace std;
class Complex{
    int real; int imag;
    public:
    Complex():real(0),imag(0){
	}
    Complex(int y, int x){
    	real =  y;
    	imag = x;
	}
    Complex operator+( Complex&obj){
    	Complex t;
    	t.real = real + obj.real;
    	t.imag =  imag + obj.imag;
    	return t;
	}
	Complex operator+(int i){
		Complex t;
		t.real = real+i;
		t.imag = imag;
		return t;
		}
	friend Complex operator+(int , Complex &);
	
	int getter_real(){
		return real;
	}
	int get_imag(){
		return imag;
	}
};
	Complex operator+(int lhs, Complex &obj)
	{
		Complex temp;
		temp.real = obj.real + lhs;
		temp.imag = obj.imag;
		return temp;
	}

int main(){
    Complex c1(4,5),c2(7,8);
    Complex c3 = c1+c2;
    cout<<"\nComplex Number: ( "<<c3.getter_real()<<" , "<<c3.get_imag()<<" )";
    Complex c4 = c1+10;
    cout<<"\nComplex Number: ( "<<c4.getter_real()<<" , "<<c4.get_imag()<<" )";
    Complex c5 = 2+c2;
	cout<<"\nComplex Number: ( "<<c5.getter_real()<<" , "<<c5.get_imag()<<" )";
	Complex c6 = 2+c2+c1+1;
	cout<<"\nComplex Number: ( "<<c6.getter_real()<<" , "<<c6.get_imag()<<" )"; 
}