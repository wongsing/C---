#include <stdio.h>
//BCD ���ǽ�ʮ������ת����ʮ���ƣ���0-6��A-F�� 
int main()
{
	int x;
	int a,n;
	scanf("%d",&x);
	
	a = x % 16;                //ȡ���� 
	n = x / 16 * 10 + a ;      //ת����ʮ���� 
	
	printf("%d",n);
	return 0; 
}
