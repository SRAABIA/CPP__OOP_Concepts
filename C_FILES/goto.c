#include<stdio.h>
#include<stdlib.h>
int main(){
	int goal;
	printf("\nno of goals? ");
	scanf("%d",&goal);
	if(goal<=5)
	goto sos;
	else{
		printf("\nAbout timing being perfect");
		exit(0);
	}
	sos:
		printf("\nI am robotic");
	
	return 0;
	
}
