#include<stdio.h>
int main(){					//BY MAKING A SEPARATE POINTER
	int array[2][2]={0};
	int*arr=&array[0][0];
//	scanf("%d",&arr[0][1]);
//	printf("\n%d",arr[0][0]);
//	printf("\n%d",arr[0][1]);
//	printf("\n%d",arr[1][0]);
//	printf("\n%d",arr[1][1]);

	scanf("%d",((arr+0)+0));
	scanf("%d",((arr+0)+1));
	scanf("%d",((arr+1)+0));
	scanf("%d",((arr+1)+1));
	printf("\n%d",*arr);
	printf("\n%d",*arr+1);
	printf("\n%d",*arr+2);
	printf("\n%d",*arr+3);

//	printf("\n%d",*(*arr+0)+1);
//	printf("\n%d",*(*arr+1)+0);
//	printf("\n%d",*(*arr+1)+1);
}