#include <stdio.h>
//选择法排序 
struct Student
	{
		int num;
		char name[20];
		float score;
	};
int main()
{
	struct Student stu[5]={{10101,"Zhang",78},{10103,"ZWang",98.5},
							{10106,"Li",86},{10110,"Sun",100},
							{10108,"Ling",73.5}};
	struct Student temp;  //因为是同类型的结构体变量，所以可以相互赋值 
	const int n = 5;
	int i,j,k;
	printf("The order is:\n");
	for(i=0;i<n-1;i++)  
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(stu[j].score>stu[k].score)
				k=j;
			temp=stu[k];
			stu[k]=stu[i];
			stu[i]=temp;		
	}
	for(i=0;i<n;i++)
		printf("%6d %8s %6.2f\n",stu[i].num,stu[i].name,stu[i].score);
		printf("\n");
		return 0;

}
