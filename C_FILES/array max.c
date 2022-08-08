#include<stdio.h>
 int arr();
 int main(){
 	int array[5],i;
 	for(i=0;i<5;i++)
 {
 	printf("enter elements for arr[%d]: ",i+1);
 	scanf("%d",&array[i]);
 }
 printf("%d is maxist element",arr(array));
 
 }
 int arr(int* array){
 	int max=0;
 	int i;
 	for(i=0;i<5;i++){
 		if(array[i]>max)
 		max=array[i];
 		
	 }
	 return max;
 }
