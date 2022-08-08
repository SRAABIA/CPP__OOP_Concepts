#include<iostream>
using namespace std;
class Complex{
    int real;
    int image; 
    public:
    Complex(){}
    Complex(int a,int b):real(a),image(b){}
    ostream& operator<<(ostream& );
    friend ostream& operator<<(ostream& ,Complex&);
    Complex operator*(int );
    Complex operator*(Complex&);
    friend Complex operator*(int,Complex&);
    void display();
};
Complex Complex ::operator*(int a){
    Complex t;
    t.real=real*a;
    t.image=image;
    return t;
}
Complex Complex ::operator*(Complex&obj){
    Complex t;
    t.real=real*obj.real;
    t.image=image*obj.image;
    return t;
}
Complex operator*(int a,Complex& obj){
    Complex t;
    t.real=obj.real*a;
    t.image=obj.image;
    return t;
}
void Complex :: display(){
    cout<<"\n\nReal: "<<real;
    cout<<"\nImage: "<<image;
}
ostream& Complex::operator<<(ostream& os){
    os<<endl<<"Real: "<<real<<endl<<"Image: "<<image<<endl;
}
ostream& operator<<(ostream& os,Complex& obj){
    cout<<"friend";
    os<<endl<<"Real: "<<obj.real<<endl<<"Image: "<<obj.image<<endl;
}
int main(){
    Complex a(2,4);
    Complex b(2,4);
    Complex d(2,4);
    Complex c = a*b*d;
    cout<<c; //Friend function needed
    // c<<cout;
    c = a*6;
    c.display();
    c = 4*a;
    c.display();

}