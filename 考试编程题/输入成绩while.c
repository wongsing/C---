#include <stdio.h>
//����ɼ������Ϊ0�����100���޸���������������ȷ��
//������������ܷ֡�ƽ�����Լ���߷� 
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
