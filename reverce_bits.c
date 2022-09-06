#include<stdio.h>
int main(){
	unsigned int x=10;//1010 == 0101
	int i=0,j;
	for(i=0,j=31;i<j;i++,j--){
		if( !(x & ( 1 << i)) != !(x & (1 << j))){
		
			x = x ^ ( 1 << i );
			x = x ^ ( 1 << j );
			
		}
		
	}
	printf("%d\n",x);
}
