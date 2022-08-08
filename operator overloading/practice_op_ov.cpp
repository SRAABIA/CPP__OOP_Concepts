#include<iostream>
using namespace std;
class OPERATE{
    int a,b;
    public:
    OPERATE(){}
    OPERATE (int a,int b):a(a),b(b){}
    bool operator <(const OPERATE&obj){
        if(a<obj.a){
            return true;
        }
        if(a<obj.a && b<obj.b){
            return true;
        }
        return false;
    }
    OPERATE operator -(){
        a=-a; //just changing the signs
        b=-b;
        return *this;
    }
    OPERATE operator ()(int a,int b,int c){
        OPERATE p;
        p.a = a*b;
        p.b = b*c;
        return p;
    }
    OPERATE operator +=(const OPERATE&obj){
        a += obj.a;
        b += obj.b;
        return *this;
    }
    void play()
    {
        cout<<endl<<" "<<a<<" "<<b;
    }
    friend ostream& operator<<(ostream&,OPERATE&);
    friend istream& operator>>(istream&,OPERATE&);
    friend OPERATE operator++(OPERATE&);
    friend OPERATE operator++(OPERATE&,int);
};
OPERATE operator++(OPERATE& obj){
    obj.a++;
    
    return obj;
}
OPERATE operator++(OPERATE&obj,int){
	obj.a++;
	return obj;
}
ostream& operator << (ostream&os,OPERATE&obj){

        os<<endl<<" "<<obj.a<<" "<<obj.b;
        return os;

}
istream& operator>>(istream&os, OPERATE&obj){
    cout<<"Enter Real val: ";
    os>>obj.a;
    cout<<"Enter Imaginary val: ";
    os>>obj.b;
    return os;
}
int main(){
    OPERATE obj1(-2,6),obj2(4,-5);
    // if(obj1 < obj2) cout<<endl<<"True";
    // else cout<<endl<<"False";
    // cout<<endl;
    -obj1;
    obj1.play();
    // cout<<endl;
    // -obj2;
    // obj2.play();
     OPERATE P(3,2);
    OPERATE O;
    O = P(2,3,4);
    O.play();
//     OPERATE K(2,2);
//     K += P;
//     K<<cout;
//     cout<<K;
//     OPERATE p;
//     cin>>p;
//     cout<<p;
//     K++;
//     cout<<K;
//     ++P;
//     cout<<P;
// //    ++++K;
// //	K++++;
// //    cout<<K;
}