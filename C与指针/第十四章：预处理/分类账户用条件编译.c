#include <stdio.h>
//��ӡ�����Ԥ�������ָ���ķ����˻������������� 
//��Ҫ��������ѡ������壬���Զ���һ��OK
//������ѡ�û�����壬��OK��δ�����壬���Ծ�ִ��#ifndef 
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
