//A Program for bobble Sort:-
#include<stdio.h>
int main(){
	int a[5]={5,3,9,10,1};
	int i=0,j,temp;
	for(i=0;i<4;i++){
		for(j=0;j<4-i;j++){
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				}
			}
		}
		for(i=0;i<5;i++){
		printf("%d ",a[i]);
		}
		printf("\n");
}
