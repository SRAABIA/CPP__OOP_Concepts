			//WHY WOULD IT RUN ON F=0 ?

#include<stdio.h>
long int fact (int );
int main(){
	int f;
	while (f != 0){
	printf("\n enter any number whatever you like etc:: ");
	long int x;
	scanf("%d",&f);
	x = fact(f);
	printf("The factorial of your number is: %ld",x);
	}
	
}
long int fact (int ff){
	int i;
	long int s=1;
	for(i=1;i<=ff;i++){
	s*=i;
	}
	return s;
}
