/*In the call to strcpy(str1,str2), there is no way the strcpy
  will check whether the string pointer by str2 will fit in str1 */
// To avoid the we use "strncpy(str2,str1,sizeof(str2))"
#include<stdio.h>
#include<string.h>
int main(){
	char str1[6] ="ABCDE";
	char str2[5];
//	printf("Enter A String : ");
//	scanf("%s",str1);
	strncpy(str2,str1,sizeof(str2));	//strncpy copys without "\0";
	str2[sizeof(str2)-1]='\0';		//adding "\0" to the end for terminating;
	printf("%s\n",str2);			//output is "ABCD" (4-3 charecters form 0)
}

