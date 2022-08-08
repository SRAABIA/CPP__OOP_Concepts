#include<stdio.h>
int main(){
	int s[4][2]={0};
	int(*p)[2];
	for(int i=0;i<=3;i++){
		p=&s[i];
		printf("%d num\n",i);
		scanf("%d",p[i]);
		
		
	}
		for(int i=0;i<4;i++){
			for (int j=0;j<2;j++){
				printf(" %d ",*(*(p+i)+j));
			}
			printf("\n");
			
			}

}