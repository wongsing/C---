#include <stdio.h>
//输入两个学生的学号姓名成绩，输出成绩高的学生信息 
int main()
{
	struct Student{
		int num;
		char name[20];
		float score;
	}student1,student2;//因为student1.name是数组，数组名就是地址所以不用& 
	scanf("%d%s%f",&student1.num,student1.name,&student1.score);
	scanf("%d%s%f",&student2.num,student2.name,&student2.score);
	printf("The higher score is:\n");
	if(student1.score>student2.score)
		printf("%d %s %6.2f\n",student1.num,student1.name,student1.score);
	else if(student1.score<student2.score)
		printf("%d %s %6.2f\n",student2.num,student2.name,student2.score);	
	else //成绩相同则输出两位学生信息 
	{	
		printf("%d %s %6.2f\n",student1.num,student1.name,student1.score);
		printf("%d %s %6.2f\n",student2.num,student2.name,student2.score);	
	}	
	return 0;
}
