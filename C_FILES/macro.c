#include<stdio.h>
#define add(x,y) x+y
int main(){
	int x,y;
	printf(":: ");
	scanf("%d %d",&x,&y);
	printf("\tresult: %d",add(x,y));
}
