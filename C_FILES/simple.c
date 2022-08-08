#include<stdio.h>
int main(){
	int array[2][2]={0,1,2,3};
	printf("%d",*(*(array+1)+0));
}