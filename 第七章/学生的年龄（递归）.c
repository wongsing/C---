#include <stdio.h>
//������ѧ�������䣬ÿ��ѧ����ǰһ��ѧ�������꣬��һ��ѧ����ʮ��
//��Ҫ�õ��ݹ飬Ҳ���Ǻ���ֱ�Ӽ�����ú������� 
int main(){
	int age(int n);
	printf("No.5,age:%d\n",age(5));
	return 0;
}

//����ݹ麯�� 
int age(int n)
{
	int c;
	if(n==1) c=10;
	else c=age(n-1)+2;
//�Ȼ��ݣ���n=5-->1
//����ƣ���n=1-->5 
	return(c);
}
