//Pointer To Array:
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,arr[5]={1,2,3,4,5};
//	int *ptr=arr;
//	printf("%d\n",*ptr);
	int (*ptr)[5]=&arr;
//	ptr = &arr;
	for(i=0;i<5;i++){
	//	ptr[i]=&arr[i];
		printf("%d\n",*(*ptr+i));
	}


}
