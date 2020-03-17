#include <stdio.h>
#include <string.h>
//将整数转换为字符,用递归 
void
binary_to_ascii(unsigned int value)
{
	unsigned int quotient;
	
	quotient = value / 10; //让此参数逐渐变小 
	if(quotient != 0) 
		binary_to_ascii( quotient );
	putchar(value % 10 + '0');  
} 

int main()
{
	unsigned int a = 658;
	binary_to_ascii(a);
	return 0;
}
