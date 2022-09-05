// A Program to Covert Decimal To Binary:-
#include<stdio.h>
int main(){
	int n=333,b[10],i;
	for(i=0;n!=0;i++){
		b[i]=n%2;
		n=n/2;
	}
	for(i=i-1;i>=0;i--){
		printf("%d",b[i]);
	}
	printf("\n");

}
