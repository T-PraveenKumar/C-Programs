#include<stdio.h>
int main(){
	int a;
	printf("Enter A Number To Check Power of 2 or not : ");
	scanf("%d",&a);

	if((a&(a-1))==0) 
		printf("Power of 2 \n");
	else
		printf("Not Power of 2 \n");
	
}
