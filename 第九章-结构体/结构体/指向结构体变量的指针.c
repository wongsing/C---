#include <stdio.h>
#include <string.h>
//ָ��ṹ�������ָ�� 
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
	strcpy(stu1.name,"kobe");//�����Ѷ��壬����ֱ�Ӷ�����ֵ������strcpy 
	stu1.sex='M';
	stu1.score=89.5;
	printf("No:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",
			stu1.num,stu1.name,stu1.sex,stu1.score);
	printf("No:%ld\nname:%s\nsex:%c\nscore:%5.1f\n",
			(*p).num,(*p).name,(*p).sex,(*p).score);
			//p->num Ҳ�ǳ����ģ����ַ�ʽ�ȼ� 
	return 0;
}
