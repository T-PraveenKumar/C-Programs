#include<stdio.h>
int main(){
	int n;
	printf("Enter A Number To check Even/Odd : ");
	scanf("%d",&n);
	if((n&1) == 0)
		printf("Even\n");
	else
		printf("odd\n");
}
