//To find the STACK is growing up/down?
#include<stdio.h>
int main(){
	char x[2];
	if((&x[1]-&x[0])<1)
	{
		printf("Stack is Grow\n");
	}
	else
		printf("Stack Down\n");
	return(0);
}
