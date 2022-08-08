#include<iostream>
using namespace std;

class SAMPLE{
    private:
    int a, b, *p;
    public:
    SAMPLE(){
        p = new int;
        cout<<endl<<"Default";
    }
    SAMPLE(int v, int w, int c){
        a=v;
        b=w;
        p = new int;
        *p=c;
    }
    SAMPLE(const SAMPLE &d){
        a = d.a;
        b = d.b;
        p = new int;
       *p = *(d.p);

    }
    void set_data(int f, int g, int h){
        a=f; 
		b=g; 
		*p=h;
    }
    void display(void){
            cout<<endl<<"A is : "<<a;
                    cout<<endl<<"B is : "<<b;
	cout<<endl<<"P is : "<<*p;
    }
    ~SAMPLE(){
    	delete p;
		cout<<endl<<"deleted";
    	
	}
    
};
int main(void){
	cout<<"entered";
        SAMPLE s1(3,4,5);
        cout<<endl<<"--s11--"<<endl;
        s1.display();
        fflush(stdin);
        
        // SAMPLE s2 = s1;
        SAMPLE s2(s1);
        cout<<endl<<"--s2--"<<endl;
        s2. display();
        fflush(stdin);
        
        s2.set_data(9,9,9);
        cout<<endl<<"--s1twice--"<<endl;
        s1.display();
        fflush(stdin);
        
        cout<<endl<<"--s2twice--"<<endl;
        s2. display();


    
}