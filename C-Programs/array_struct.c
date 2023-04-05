//Array Structure: 
#include<stdio.h>
struct student{
	int id;
	char name[20];
	float marks;
};
int main(){
	struct student sdata[2];
	int i;
	for(i=0;i<2;i++){
	printf("Enter Student Rollno : ");
	scanf("%d",&sdata[i].id);
	printf("Enter Student Name : ");
	scanf("%s",sdata[i].name);
	printf("Enter Marks : ");
	scanf("%f",&sdata[i].marks);
	}
	for(i=0;i<2;i++){
		printf("%d\n%s\n%f\n",sdata[i].id,sdata[i].name,sdata[i].marks);
	}

}
