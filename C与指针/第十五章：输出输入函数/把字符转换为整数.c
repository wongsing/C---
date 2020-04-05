#include <stdio.h>
#include <ctype.h>
int read_int();
int main()
{
	int i = read_int();
	printf("%d\n",i);
	return 0;
} 
int read_int()
{
	int 	value;
	int		ch;
	value = 0;
	//从标准输入输入读入的数字，得到一个非数字字符就停止 
	while((ch=getchar()) != EOF && isdigit(ch)){
		value *= 10;
		value += ch - '0';
	}
	//把非数字字符退回到流中，这样他就不会丢失 
	ungetc(ch,stdin); 
	return value;
}
