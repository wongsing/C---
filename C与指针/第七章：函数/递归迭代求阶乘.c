#include <stdio.h>
//�ֱ��õݹ�͵�����n�Ľ׳� 
//Ҫ�����ʹ�õݹ飬��Ϊ��ʱ���ڴ濪���ȵ������� 
long factorial1( int n);
long factorial2( int n);
int main()
{
	int i = 5;
	printf("%d�Ľ׳˵���:%ld\n",i,factorial1(i));
	return 0;
}



long
factorial1( int n)
{
	if(n <= 0)
		return 1;
	else
		return n*factorial1(n - 1);
}

long
factorial2( int n)
{
	int  result = 1;
	while( n > 1){
		result *= n;
		n -= 1;
	}
	return result;
}



