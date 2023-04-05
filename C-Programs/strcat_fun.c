#include<stdio.h>
#include<string.h>
int main(){
	char a[20];
	char b[20];
	printf("Enter First String : ");
	scanf("%s",a);
	printf("Enter Second String : ");
	scanf("%s",b);
	strcat(a,b);
	printf("After Concat : %s\n",a);
}
