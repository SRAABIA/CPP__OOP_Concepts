#include<iostream>
using namespace std;
class ee{
    public:
    int y;
    void setter(int o){
        y=o;
    }
    int getter(){
        return y;
    }
};
int main(){
    ee *s = new ee;
    (*s).setter(1666);
    cout<<s->getter();
    // cout<<(s);
}