#include <stdio.h>

int main()
{
	struct Student
		{
			long int num;
			char name[20];
			char sex;
			char add[20];
		}a={10101,"Li Lin",'M',"123 huizhou"};
		//���ֽṹ�������ʽ
		/*1.struct Student{��Ա}��  struct Student a; 
		 2.struct {��Ա} a; */
		printf("NO:%ld\nname:%s\nsex:%c\naddress:%s\n",a.num,a.name,a.sex,a.add);
		return 0;
}
