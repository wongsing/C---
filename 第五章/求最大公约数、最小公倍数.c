#include <stdio.h>
//�����Լ������С������
//������ѧ˼ά�����Լ������ͬʱ������
//��С���������ܹ���ͬʱ������
int num(int a , int b);
int main ()
{
	int m,n,i,j,s,k,c;
	scanf("%d %d",&m,&n);
//�����Լ��
	
	for(i=1;i<=m&&i<=n;i++){	 
	if((m%i==0)&&(n%i==0))
	s=i;
}	
//��һ�ַ�����շת�����
	c = num (m,n);
//����С������ --->�����ֵ��ʼ�� 
	if(m>=n)j=m;
	else j=n;
	for(;!(j%m==0&&j%n==0);j++);

	printf("���Լ��Ϊ%d����С������Ϊ%d��\n",s,j);
	printf("���Լ��Ϊ%d����С������Ϊ%d��\n",c,j);
	return 0;
}

int num(int a , int b)
{
	int t;
	while(b!=0){
		t = a % b;
		a = b;
		b = t;
	}
	return a;	
}
