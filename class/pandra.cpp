#include<iostream>
using namespace std;
                                    //HOW TO USE this hehehheheheehehehhehehehehehehehe 
class tara{
    int x,y;
    public:
    tara(){
        x=0;
        y=0;

    }
    tara(int x){
        this->x=x;
        y=x;
    }
    tara(int x , int y){
        this->x=x;
        this->y=y;
    }
    void display(){
        cout<<endl<<"X = "<<x<<endl<<"Y = "<<y<<endl;
    }
};
int main(){
    tara sitara;
    sitara.display();
    tara sitara2(11);
    sitara2.display();
    tara sitara3(10,4);
    sitara3.display();
}