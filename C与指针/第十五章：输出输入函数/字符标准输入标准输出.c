#include <stdio.h>
//把标准输入的字符逐个复制到标准输出 
int main()
{
	int ch;
	while((ch=getchar())!= EOF)
		putchar(ch);
	return 0;
	
}
