#include <stdio.h>
#include <math.h>

int main()
{
	int p , r , n ;
	r = 7;
//rΪ�������ʣ�nΪ������pΪ��������ȵı��� 
	scanf("%d",&n);
	p = pow (1+r,n);
//��ʽ��p = ��1+r��^n 
	printf("%d",p);
	return 0 ;
}
