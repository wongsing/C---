#include <stdio.h>
int hermite(int n , int x);
//���׶���ʽ�ĵݹ��� 
int main()
{
	int hn , n ,x;
	printf("��������׶���ʽ��n��x:");
	scanf("%d %d",&n,&x);
	hn = hermite ( n , x );
	printf("�������:%d\n",hn);
	return 0;
}

int hermite(int n , int x)
{
	int hn;
	if(n <= 0) hn = 1;
	else if(n == 1) hn = 2 * x ;
	else if(n >= 2) hn = 2*x* hermite(n-1 , x) - 2*(n-1)*hermite(n-2 , x);
	
	return hn;
}
