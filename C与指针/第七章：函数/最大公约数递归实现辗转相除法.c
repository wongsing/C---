#include <stdio.h>
int gcd(int M , int N);
//�����Լ�� �õ���շת����� ���ݹ�ʵ�� 
int main()
{
	int ret , m ,n;
	printf("������m��n:");
	scanf("%d %d",&m,&n);
	ret = gcd ( m , n );
	printf("%d��%d�����Լ��Ϊ:%d\n",m,n,ret);
	return 0;
}

int gcd(int M , int N)
{
	int ret = 1, num , r; 
 	if( M <= 0 || N <= 0){
 		ret = 0;
 		num = 0;
 	} 
	if(ret){
		r = M % N; 
		if( r == 0) num = N;
		else if(r > 0) num = gcd(N , r);
	}
	
	return num;
}
/*
do {
r = m % n;
m = n;
n = r;
} while( r > 0 );
return m;
*/
