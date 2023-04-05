//Converting binary Number to decimal
#include<stdio.h>
int main(){
	int binary;
	int decimal=0,rem=0,weight=1;
	printf("Enter A Binary Number : ");
	scanf("%d",&binary);

	while(binary != 0){
		rem = binary % 10;
		decimal = decimal + (rem*weight);
		binary = binary / 10;
		weight = weight*2;
	}
	printf("%d\n",decimal);
}
