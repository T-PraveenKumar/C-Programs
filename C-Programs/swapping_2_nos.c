//Program To Swap without using 3rd Variable
#include<stdio.h>
int main(){
	int a,b;
	printf("Enter Two Numbers : ");
	scanf("%d%d",&a,&b);
	printf("Before Swap :\na = %d\nb = %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swap :\na = %d\nb = %d\n",a,b);
}
