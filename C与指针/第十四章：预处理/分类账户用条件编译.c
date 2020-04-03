#include <stdio.h>
//打印风格由预定义符号指定的分类账户，用条件编译 
//需要考虑两种选项都被定义，所以定义一个OK
//若两种选项都没被定义，则OK就未被定义，所以就执行#ifndef 
int main()
{
	return 0;
}

void print_ledger(int value)
{
	#ifdef	OPTION_LONG   
	#define	OK	1
	print_ledger_long(value);
	#endif
	
	#ifdef	OPTION_DETAILED
	#define	OK	1
	print_ledger_detailed(value);	
	#endif
	
	#ifndef	OK     
	print_ledger_default(value);
	#endif	
}
