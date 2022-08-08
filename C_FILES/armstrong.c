#include<stdio.h>
int armstrong(int );
int main(){
	int num;
	printf("\nenter number ");
	scanf("%d",&num);
	int r=armstrong(num);
	if(num==r){
		printf("%d is armstrong",r);
	}
	else{
		printf("%d is not armstrong",num);
	}	
}
int armstrong(int num){
	int x=0,i;
	while(num!=0){
		i=num%10;
		x+=i*i*i;
		num/=10;
	}
	return x;
	
}
