#include <stdio.h>
#include <string.h>
//ͶƱϵͳ--�ȶ���һ���ṹ�����飬����ѡ������Ʊ����ֵ��ȥ
//ͶƱ�����ѡ������ṹ�������еĺ�ѡ������ͬ�Ļ���Ʊ���ͼ�һ
 
struct Person
	{
		char name[20];
		int count;
	}leader[3]={"james",0,"kobe",0,"jordan",0};
int main()
{
	int i,j;
	char leader_name[20];
	printf("Who is the best players of the basketball?\n");
	for(i=0;i<10;i++){
		scanf("%s",leader_name);
			for(j=0;j<3;j++)
				if(strcmp(leader_name,leader[j].name)==0) leader[j].count++;		
	}
	printf("\nResult:\n");
	for(i=0;i<3;i++)
		printf("%5s:%d\n",leader[i].name,leader[i].count);
	return 0;

}
