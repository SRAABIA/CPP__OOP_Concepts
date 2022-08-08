#include<iostream>
using namespace std;
class Box{
    int H,B,L;
    public:
    Box(){};
    int volume(){
        return H*B*L;
    }
     Box(int length, int height, int breadth){
        H=height; B=breadth; L=length;
    }
    void Compare(Box &box2, Box &box3){
        if(box2.H<box3.H){
            cout<<"Box 3: "<<box3.H<<" "<<box3.B<<" "<<box3.L;
        }
        else 
        cout<<"Box 3: "<<box2.H<<" "<<box2.B<<" "<<box2.L;
    }
};
int main(){
    Box box2(23,6,9), box3(55,12,96);
    box2.Compare(box2,box3);
}