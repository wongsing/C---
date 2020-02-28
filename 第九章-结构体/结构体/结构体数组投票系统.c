#include <stdio.h>
#include <string.h>
//投票系统--先定义一个结构体数组，将候选人名，票数赋值进去
//投票输入候选人名与结构体数组中的候选人名相同的话，票数就加一
 
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
