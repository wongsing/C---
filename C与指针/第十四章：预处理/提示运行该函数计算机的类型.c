#include <stdio.h>
#include <cpu_type.h>
//������ű�����ͷ�����Ӧ��ֵ����if...else 
//��������һ�������淵��ֵ����֤��һ���� 
int main()
{
	return 0;
}

int cpu_type(void)
{
	int i;
	#if defined(VAX)	
		i = CPU_VAX;
	#elif defined(M68000)	
		i =  CPU_68000;		
	#elif defined(M68020)	
		i =  CPU_68020;		
	#elif defined(M80386)	
		i =  CPU_80386;		
	#elif defined(X6809)	
		i =  CPU_6809;		
	#elif defined(X6502)	
		i =  CPU_6502;		
	#elif defined(U3B2)	
		i =  CPU_3B2;		
	#else
		i =  CPU_UNKNOWN;		
	#endif
	
	return i;
} 
