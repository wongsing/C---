#include <stdio.h>
//����������������ڸ���ĵڼ��� 
int leap(int x);
int days(int m ,int d);
int main()
{
	int year,month,day,k;
	scanf("%d %d %d",&year,&month,&day);
	k=leap(year);
	if(k==1) printf("������%d���еĵ�%d��!\n",year,days(month,day)+1);
	else printf("������%d���еĵ�%d��!\n",year,days(month,day));
	return 0;
}

int leap(int x)
{
	int ret;
	if((x%4==0&&x%100!=0)||(x%400==0)) ret =1;
	else ret =0;
}

int days(int m ,int d)
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int sum=0,i;
	for(i=0;i<m-1;i++){
		sum+=a[i];
	}
	return sum+d;
}
