#include <stdio.h>
//输入成绩，最低为0，最高100，无负数，考生人数不确定
//输出总人数、总分、平均分以及最高分 
int main()
{
	int n = 0;
	double score;
	double average;
	double sum = 0;
	double max = 0;
	while(1){
		scanf("%lf",&score);
		if(score<0) break;
		sum += score;
		if(max<score) max=score;
		n++;
	}
	average = sum /n;
	printf("n=%4d\n",n);
	printf("sum=%8.2f\n",sum);
	printf("average=%8.2f\n",average);
	printf("max=%8.2f\n",max);
	return 0;
}
