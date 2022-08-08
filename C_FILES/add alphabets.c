#include<stdio.h>
int main(){
	int ch = 'a'+'b';
	switch(ch){
		case 'a':
		case 'b':
			printf("B is.");
			break;
		case 'a'+'b':
			printf("added");
			
		
	}
	return 0;
}
