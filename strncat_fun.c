// strncat funtion
#include<stdio.h>
#include<string.h>
int main(){
	char str1[7];
	char str2[20];

	strcpy(str1,"ABC");
	strcpy(str2,"fghi");
	
	strncat(str1,str2,sizeof(str1) - strlen(str1)-1 );	//it will add NULL to end
	
	printf("%s\n",str1);			//output is "ABCfgh"
}

