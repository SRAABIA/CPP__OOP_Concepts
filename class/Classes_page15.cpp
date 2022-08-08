#include<iostream>
#include<string.h>
using namespace std;
const int max_len=255;
class stringg {
    public:
    	stringg(){
		}
    	stringg(const stringg&obj){
    		strcpy(s,obj.s);
    		len=obj.len;
		}
    void assign(const char*st){ strcpy(s,st); //st passes the address of pointer to three
    len = strlen(st);}
    int length(){return(len);}
    void print(){cout<<s<<"\nlength: " <<len<<"\n";}
  
    private:
    char s[max_len];
    int len;
};

main(){
    stringg one,two,four;
    char three[40]={"my name is charlie puth and i am smart"};
    two.assign(three);
    cout<<three;
    one.assign("my name is alan Turing Smith sun won");
    cout<<"\nLength: "<<strlen(three)<<endl;
    //printing the shorter string of the two;
    (one.length()<=two.length())?one.print():two.print();

}