#include <stdio.h>
//分别用递归和迭代求n的阶乘 
//要分情况使用递归，因为有时候内存开销比迭代还大 
long factorial1( int n);
long factorial2( int n);
int main()
{
	int i = 5;
	printf("%d的阶乘等于:%ld\n",i,factorial1(i));
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



