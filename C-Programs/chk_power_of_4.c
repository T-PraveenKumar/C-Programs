#include<stdio.h>
int main(){
	int n,c=0; 
	printf("Enter A Number Power of 4 : ");
	scanf("%d",&n);
	while((n & 1) == 0) 
	{
	       	c++;
	       	n >>= 1;
	} 
	if(c%2 == 0)
		printf("pow of 4 \n");
	else
		printf("not pow of 4 \n");
}
