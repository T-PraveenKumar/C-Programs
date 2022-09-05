#include<stdio.h>
int main(){
	int x;
	printf("Enter A Number : ");
	scanf("%d",&x);
	x=-(~x);
	printf("%d\n",x);
}
