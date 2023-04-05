// Creating a structure function and accessing;
#include<stdio.h>
#include<string.h>
struct student{
	int rno;
	char name[20];
	float marks;
};
int main(){
//	struct student s1={10,"ABCDEF",24.5}; //method 1 to assign values;
	struct student s1;
//method 2 to assign values to structure variables;
	s1.rno=10;
	strcpy(s1.name,"ABCDEf");
	s1.marks=24.5;
	printf("%d\n%s\n%f\n",s1.rno,s1.name,s1.marks);
}
