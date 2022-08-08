#include<iostream>
using namespace std;

class MYClass{
        public:
        MYClass(){}
        MYClass(const MYClass &obj){
            cout<<"Copy constructor";
        }

};
int main(){
    MYClass obj;
    return 0;
}