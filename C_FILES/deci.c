#include<stdio.h>
long int bin(int);
int main(){
	int dec;
	printf("enter decimal number: ");
	scanf("%d",&dec);
	
	printf("Binary equivalent: %ld",bin(dec));
}
long int bin(int dec){
	int rem=0,f=1;
	long int bin=0;
	
	while(dec!=0){
		rem=dec%2;
		bin += rem*f;
		f*=10;
		dec/=2;
		
	}
	return bin;
}
