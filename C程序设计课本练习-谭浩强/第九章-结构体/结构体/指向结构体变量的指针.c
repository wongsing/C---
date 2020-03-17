#include <stdio.h>
#include <string.h>
//指向结构体变量的指针 
int main()
{
	struct Student
	{
		long num;
		char name[20];
		char sex;
		float score;
	};
	struct Student stu1;
	struct Student *p;
	p=&stu1;
	stu1.num=10101;
	strcpy(stu1.name,"kobe");//数组已定义，不能直接对它赋值，就用strcpy 
	stu1.sex='M';
	stu1.score=89.5;
	printf("No:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",
			stu1.num,stu1.name,stu1.sex,stu1.score);
	printf("No:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",
			(*p).num,(*p).name,(*p).sex,(*p).score);
			//p->num 也是成立的，三种方式等价 
	return 0;
}
