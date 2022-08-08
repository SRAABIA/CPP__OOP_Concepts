#include<stdio.h>
void fun(int *,int*);
int main(){
	int i=2,j=3;
	fun(&i,&j);
	printf("%d %d\n",i,j);
	return 0;
}
void fun(int* i,int* j){
	*i=*i**i;
	*j=*j**j;
}
