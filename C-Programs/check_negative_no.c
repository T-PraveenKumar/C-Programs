#include<stdio.h>
int main(){
	int n=-1;
	if(((n>>31)&1)==1)
		printf("Enterd value is negative\n");
	else
		printf("Enterd value is positive\n");

}
