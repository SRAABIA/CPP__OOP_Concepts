#include<stdio.h>
int main(){
	int matrix[2][2],trans[2][2];
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\nenter element for matrix[%d][%d]: ",i+1,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf(" %d ",matrix[i][j]);
			
		}printf("\n");
	}
	printf("\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			trans[j][i]=matrix[i][j];		
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf(" %d ",trans[i][j]);
			
		}printf("\n");
	}
}
