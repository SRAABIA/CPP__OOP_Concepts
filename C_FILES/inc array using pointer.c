#include<stdio.h>
int* inc(int* , int);
int main(){
	int array[3]={3,3,3};
	int *p;
	p=inc(array,3);
		for(int i=0; i<3;i++){
		printf("\n\tnum %d",*(array+i));	
	}
}
int* inc(int* arr, int n){
	for(int i=0; i<n;i++){
		*(arr+i)+=3;	
	}
	return arr;
}