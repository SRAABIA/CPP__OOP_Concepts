#include<iostream>
using namespace std;
template<typename T,typename u>
class Weight{
  private:
  T kg;
  u grams;
  public:
  void setdata(T x){
      kg = x;
    
  }
  void setdata(T x, u y){
      kg = x;
      grams = y;
  }
  T getdata(){
      return kg;
  }
  u getgr(){
      return grams;
  }
};
int main(){
    // Weight <int>obj;
    // obj.setdata(5);
    // cout<<"\nvalue: "<<obj.getdata();
    Weight<int,string> objj;
    objj.setdata(9,"xddd");
    cout<<"\nvalue: "<<objj.getdata();
    cout<<"\nvalue of grams: "<<objj.getgr();
}