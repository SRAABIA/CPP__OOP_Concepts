#include<stdio.h>
#include<string.h>
struct date{
	int d,y;
	char month[11];
}d1,de;
int main(){
	printf("please enter first date: d/month/year:  ");
	scanf("%d %s %d",&d1.d,d1.month,&d1.y);
//	printf("%d %s %d is the date.",d1.d,d1.month,d1.y);
	printf("please enter second date: d/month/year:  ");
	scanf("%d %s %d",&de.d,de.month,&de.y);
	if(d1.d==de.d && strcmp(d1.month,de.month)==0 && d1.y&&de.y)
	printf("\n\tDates Matched");
	else 
	printf("\n\tDates Not Matched");	
}