#include<stdio.h>
int main(){
	int a;
	printf("Enter An Integer To Swap : ");
	scanf("%d",&a);
	a=(a & 0x0f)<<4 | (a & 0xf0)>>4;
	printf("%d\n",a);

}
