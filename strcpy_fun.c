#include<stdio.h>
#include<string.h>
int main(){
	char a[20];
	char b[20];
	printf("Enter A String : ");
	scanf("%s",a);
	strcpy(b,a);
	printf("%s\n",b);
}
