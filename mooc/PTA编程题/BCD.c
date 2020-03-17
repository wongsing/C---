#include <stdio.h>
//BCD 就是将十六进制转换成十进制，（0-6、A-F） 
int main()
{
	int x;
	int a,n;
	scanf("%d",&x);
	
	a = x % 16;                //取余数 
	n = x / 16 * 10 + a ;      //转换成十进制 
	
	printf("%d",n);
	return 0; 
}
