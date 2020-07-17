#include <stdio.h>
int main(){
	int count,sum=0;
	do{
		printf("Enter a number: ");
		scanf("%d",&count);
		sum=sum+count;
	}while(count!=0);
	printf("The required sum of numbers entered is: %d",sum);
	return 0;
}
