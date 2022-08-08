#include<iostream>
using namespace std;
class nest{
    int a;
    int b;
    int *p;
    public:
    nest(){
        p = new int;
    }
    // nest(int y, int x, int z){
    //     a=y; b = x ; *p = z;
    // }
    nest(int o,int s, int k){
        p = new int;
        a=o; b=s; *p = k;
    }
    nest ( nest & b){
        a = b.a;
        this->b = b.b;
        // *p  = *(b.p);
        p = new int;
        *p = *(b.p);
    }
    void print(){cout<<endl<<a<<endl<<b<<endl<<*p;}
    ~nest(){ delete p; }
};
int main(){
    nest bi(8,9,100);
    bi.print();
    nest re(bi);
    re.print();
}