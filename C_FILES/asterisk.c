#include<stdio.h>
int main(){
	float a=15.6;
	float *c,*b;
	b=&a;
	c=b;
	printf("%u %u %u",&a,b,c);
	printf("\n%f %f %f %f %f\n",a,*(&a),*&a,*b,c);
}  
