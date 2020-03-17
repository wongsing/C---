#include <stdio.h>
//偶校验-->检验二进制数是否为偶，根据1的个数 
int 
even(int value , int n_bits);
int main()
{
	int a = 2, b = 4 ;
	if(even(a,b)) printf("%d为偶数\n",a);
	else printf("%d为奇数\n",a);
	return 0;
	
}
//value为二进制数值，n_bits是该数值的有效位数 
int 
even(int value, int n_bits)
{
	int parity = 0;  //统计数值中1的个数 
	while(n_bits > 0){
		parity += value & 1 ;
		printf("%d\n",parity);
		value >>= 1; //右移一位 
		n_bits-=1; 
	}
	//表示1的个数是偶数，返回true 
	return (parity % 2) == 0 ; 
}
