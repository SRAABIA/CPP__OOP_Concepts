#include<stdio.h>
int main(){
	int n[2][2]={0};
	for(int i=0; i<2; i++){
		for(int j=0; j<2 ; j++){
			printf("\nArray[%d][%d]:  ",i,j);
			scanf("%d",(*(n+i)+j));
			
			
		}
	}
		for(int i=0; i<2; i++){
		for(int j=0; j<2 ; j++){
			printf(" %d",*(*(n+i)+j));
	}printf("\n");
	}
}