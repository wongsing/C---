#include <stdio.h>
//指向结构体数组的指针 
struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
};
struct Student stu[3]={{10101,"Zhang",'M',23},{10103,"Wang",'F',25},
							{10106,"Li",'M',24}};
int main()
{
	struct Student *p;
	printf("No.    Name       sex  age\n");
	for(p=stu;p<stu+3;p++)
		printf("%5d  %-10s %2c %4d\n",p->num,p->name,p->sex,p->age);
	return 0;	

}

