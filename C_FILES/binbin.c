#include<stdio.h>
long int bint(int);
int main(){
	int dec;
	printf(":: ");
	scanf("%d",&dec);
	printf("%ld is binary eqvv",bint(dec));
}
long int bint(int dec){
	int sum=0,f=1,rem=0;
	while(dec!=0){
	rem=dec%2;
	sum+=rem*f;
	dec/=2;
	f*=10;
	}
	return sum;
}
