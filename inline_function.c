//inline function 
#include<stdio.h>
static inline int cube(int a){
	return (a*a*a);
}
int main(){
	printf("%d\n",cube(5));	
}
