//Call By value & Call By Reference;
#include<stdio.h>
void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;	
}
int cube(int a){
	return a*a*a;
}
int main(){
	int a = 10;
	int b = 5;
	int c = cube(a);	// Call with Value means "Call By value";
	printf("cube of %d : %d\n",a,c);	
	printf("\nBefore swapping : a: %d b: %d \n",a,b);
	swap(&a,&b);	// calling with address means "Call By Referance";
	printf("After swapping : a: %d b: %d \n",a,b);
}
