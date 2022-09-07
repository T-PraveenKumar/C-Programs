/* strstr funtion finds the first occurance of a sub-string2 in string1
The process of matching does not include the terminating null-characters(‘\0’), but function stops there.*/
#include<stdio.h>
#include<string.h>
int main(){
	char str1[] ="ABCABDEFG";
	char str2[] = "ABDE";
	char *p = strstr(str1,str2);	//if *p does not having data it will return null; 
	if(p)				
		printf("Srings are present\n");//output
	else
		printf("Not present\n");
	printf("%p\n",p);		//starting adress of str2
	printf("%s\n",p);		//output:ABDEFG
}

