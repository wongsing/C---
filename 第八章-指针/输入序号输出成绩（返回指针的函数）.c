#include <stdio.h>
int main()
{
	float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
	float *search(float(*pointer)[4],int n);
	float *p;
	int i , k;
	printf("enter the number of student:");
	scanf("%d",&k);
	printf("The scores of NO.%d are:\n",k);
	p=search(score,k);  //���ص���score[k][0]�ĵ�ַ 
	for(i=0;i<4;i++)
		printf("%5.2f\t",*(p+i));  //���ȡ�������ַ��ֵ��������� 
	printf("\n");
	return 0;
}
//����ָ��ĺ������β���ָ��һ��һά�����ָ����� 
float *search(float(*pointer)[4],int n)
{
	float  *pt;
	pt = *(pointer + n);  //-->score[n][0] 
// 	pt = (*pointer + n) --->�൱����score[0][n] 
	return pt;
}
