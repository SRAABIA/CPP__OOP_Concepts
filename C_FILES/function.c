#include<stdio.h>
int arearect(int l, int b)
{
	return l*b;
}
int main(){
	int l=3, b=9;
	int area;
	area= arearect(l,b);
	printf("Area of rectangle: %d ",area);
	
}
