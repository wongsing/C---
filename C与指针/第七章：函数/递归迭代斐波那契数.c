#include <stdio.h>
//分别用递归、迭代来计算斐波那契数 
long
fibonacci( int n )
{
	if( n <= 2)
		return 1;
	return fibonacci( n - 1 ) + fibonacci( n - 2 );
} 


long
fibonacci2( int n )
{
	long f1 = 1 ,f2 = 1 ,f3;

	while( n > 2 ){
		n -= 1;
		f3 = f1 + f2;		
		f1 = f2;
		f2 = f3;
		printf("%ld\n",f3); 
	}
	return f3;	
} 

int main()
{
	int i = 10;
	printf("%d\n",fibonacci2(i));
}
