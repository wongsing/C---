#include <stdio.h>

fun(int x,int y)
{	
	static int m=0, i =2;
//m,i��Ϊ��̬�ֲ�����
//ȫ�������ڣ��ֲ������� 
	i+=m+1;//--->i=i+m+1
	m=i+x+y;
	return m;
}
int main()
{
	int j=1, m =1 , k;
	k = fun(j,m);
	printf("%d, ",k);
	k=fun(j,m);
	printf("%d\n",k);
	return 0;
}
