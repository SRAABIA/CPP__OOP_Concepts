#include<stdio.h>
int prime(int);
int main(){
	int pos,pr;
	printf("input positive number: ");
	scanf(" %d",&pos);
	printf("ok ");
	pr=prime(pos);
	if(pr==1)
	printf(" %d is prime ",pos);
	else
	printf(" %d is not prime ",pos);
}
int prime( int pos){
	int i;
		printf("ok1 ");
	for(i=2;i<=pos/2;i++){
		if(pos%i == 0)
		return 0;
		else 
		return 1;
		
	}
		printf("ok2 ");
}
