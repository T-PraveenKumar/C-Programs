// strlen funtion
#include<stdio.h>
#include<string.h>
int main(){
	int length;
	char str1[] ="ABCDEF";
	length = strlen(str1); 
	printf("%d\n",length);	//Output gives: 6 
	//Note strings or arrays starts from 0-5 (6th position is NULL) 
	// you can do (length-1) because last is NULL place
}

