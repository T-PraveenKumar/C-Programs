// strchr funtion
#include<stdio.h>
#include<string.h>
int main(){
	char str1[] ="ABC@EF@gmail.com";
	
	char *str2 = strchr(str1,'@');	//finding 1st occurance '@' and stores into "*str2" remaing charecters untill NULL
	
	//Note if in case "str2[4]" not having space it will give an error "invalid initialiser"
	
	printf("%s\n",str2);			//output is: @EF@gmail.com"
}

