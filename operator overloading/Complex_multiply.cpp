#include<iostream>
using namespace std;
class Complex{
	int real, img;
	public:
		Complex():real(0),img(0){
		}
		Complex(int x,int y):real(x),img(y){}
		Complex operator*(Complex&);
		Complex operator*(int);
		friend Complex operator*(int, Complex&);
		int get_real();
		int get_img();
};
int Complex :: get_real(){ return real; }
int Complex :: get_img(){ return img; }
Complex Complex::operator*(Complex&obj){
	Complex t;
	t.real = real*obj.real;
	t.img = img*obj.img;
	return t;
}
Complex Complex :: operator*(int j){
	Complex temp;
	temp.real = real*j;
	temp.img = img;
	return temp;
}
Complex operator*(int h, Complex&obj){
	Complex temp;
	temp.real = obj.real*h;
	temp.img = obj.img;
	return temp;
}
int main(){
	Complex a(2,2), b(3,3);
	Complex c = a*b;
	cout<<endl<<"Complex a+bi Product:  "<<c.get_real()<<" + "<<c.get_img()<<"i ";
	Complex d = a*2;
	cout<<endl<<"Complex a+bi Product:  "<<d.get_real()<<" + "<<d.get_img()<<"i ";
	Complex e = 3*b;
	cout<<endl<<"Complex a+bi Product:  "<<e.get_real()<<" + "<<e.get_img()<<"i ";
}
