#include<stdio.h>
int main(){
	int a,b;
	printf("Enter A Number : ");
	scanf("%d",&a);
	printf("Enter position Set/Reset : ");
	scanf("%d",&b);
	if( a & (1 << b))	//operation : 1 & 1 = 1 else fail_0
		printf("set\n");
	else
		printf("reset\n");
}
