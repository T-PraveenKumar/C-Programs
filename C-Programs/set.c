// Bit Set Program
#include<stdio.h>
int main(){
	int n,m;
	printf("Enter the Value : ");
	scanf("%d",&n);
	printf("Enter the bit Position to Set : ");
	scanf("%d",&m);
	printf("Before the Value of : %d \n",n);
	n=n|(1<<m);
	printf("After Bit set To Position_%d (0 -> 1) Final Value is: %d\n",m,n);
}
