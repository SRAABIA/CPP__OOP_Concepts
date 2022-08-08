#include <iostream>
using namespace std;
class box {
private:
	int length,*breadth,height;
public:
	box(){
		breadth=new int;
	}
	box(int l, int b, int h){
		length=l;
		height=h;
		breadth=new int;
		*breadth = b;
	}
	void set_dimensions(int length1, int breadth1,int height1){
		length = length1;
		*breadth = breadth1;
		height = height1;
	}
	void show_data()
	{
		cout << " Length = " << length<< "\t Breadth = " << *breadth<< "\t Height = " << height<< endl;
	}
	box(box & old_obj){
		cout<<"\ncopy\n";
		length=old_obj.length;
		height=old_obj.height;
		breadth=new int;
		*breadth=*(old_obj.breadth);
	}
	~box(){
        delete breadth;
        cout<<"END"<<endl;
    }
};
int main()
{
	box B1;
	B1.set_dimensions(14, 12, 16);
	B1.show_data();
	
	box B2 (B1);
	B2.show_data();
	
	B2.set_dimensions(14, 4, 16);
	B2.show_data();
	B1.show_data();
	
	box B3 =B1;
	// B3.show_data();
	
	// B2.set_dimensions(4,2,6);
	// B1.show_data();
	// B2.show_data();
	// B3.show_data();
	// box B4;
	// // When copying the data of object
	// // after initialization then the
	// // copy is done through DEFAULT
	// // ASSIGNMENT OPERATOR
	// B4 = B1;
	// B4.show_data();	
	// cout<<"============================================================================="<<endl;
	// B4.set_dimensions(44,111,89);
	// B1.show_data();
	// B2.show_data();
	// B3.show_data();


// box obj;//default
// box obj2(1,22,33);//parameterized
// box obj1(obj);//copy


	return 0;
}