// Bit Reset Program
#include<stdio.h>
int main(){
	int n,m;
	printf("Enter the Value : ");
	scanf("%d",&n);
	printf("Enter the bit Position to Reset : ");
	scanf("%d",&m);
	printf("Before the Value of : %d \n",n);
	n=n&~(1<<m);
	printf("After Bit Reset To Position_%d (1 -> 0) Final Value is: %d\n",m,n);
}
