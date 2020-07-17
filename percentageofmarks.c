#include <stdio.h>
int main(){
	int percentage;
	printf("Enter the required percentage of marks: ");
	scanf("%d",&percentage);
	if(percentage>80){
		printf(" A Grade!");
	}
	else if((percentage<80)&&(percentage>70)){
		printf(" B Grade!");
	}
	else if((percentage<70)&&(percentage>60)){
		printf(" C Grade!");
	}
	else if((percentage<60)&&(percentage>=45)){
		printf(" D Grade!");
	}
	else if (percentage<45){
		printf(" FAIL");
	}
	
	return 0;
}
