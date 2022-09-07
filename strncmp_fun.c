// strncmp funtion
#include<stdio.h>
#include<string.h>
int main(){
	char str1[] ="ABCDEF";
	char str2[] ="ABCD";
	if(strncmp(str1,str2,4)==0)	//compares the no.of strings equal
		printf("Srings are Comapred\n");
	else
		printf("Not Comapred\n");
}

