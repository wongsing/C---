#include <stdio.h>
#include <string.h>
//������ת��Ϊ�ַ�,�õݹ� 
void
binary_to_ascii(unsigned int value)
{
	unsigned int quotient;
	
	quotient = value / 10; //�ô˲����𽥱�С 
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
