//structure pointer 
#include<stdio.h>
#include<string.h>
struct student{
	int rno;
	char name[2];
	float marks;
};
int main(){

	struct student *s1,s2;
	s1=&s2;
	s1->rno=10;
//	strcpy(s1->name,"AB");
	s1->name="AB";
	
	s1->marks=24.5;
	printf("%d\n%s\n%f\n",s1->rno,s1->name,s1->marks);
}
