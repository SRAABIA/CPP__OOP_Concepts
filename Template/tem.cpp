#include<iostream>
using namespace std;
template<class T,class D>
class Read{
    T money;
    D name;
    public:
    Read(T n,D f){
        money = n;
        name = f;
    }
    void get(){
        cout<<"\nmoney: "<<money<<"\nname: "<<name;
    }
};
template<class T,class D, class S>
class Reading: public Read<T,D>{
    S book;
    public:
    Reading(){}
    Reading(T m,S book,D f):Read<int,string>(m,f){
        this->book=book;
    }
    void get(){
        cout<<"\nBook: "<<book;
    }
};
int main(){
    Reading<int,string,string>obj(1000,"BOOK","Raabia");
    obj.get();
    obj.Read::get();
}