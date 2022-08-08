#include<stdio.h>
void swap(int*,int*);
int main(){
	int	x=10,y=3;
	swap(&x,&y);
	printf("\nx= %d\ny= %d",x,y);
}
void swap(int*x,int*y){
	int f=*x;
	*x=*y;
	*y=f;

}
