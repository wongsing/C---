#include <stdio.h>
#include <stdlib.h>
#include "g_stack.h"
//ʹ�÷��������ջ 
GENERIC_STACK (int ,_int ,10)
GENERIC_STACK (float ,_float ,5)
//����������ջ��һ��������ջ��һ����������ջ 
int main( ) {
	//��ÿ����ջѹ��ֵ 
	push_int(5);
	push_int(22);
	push_int(15);
	push_float(25.3);
	push_float(-40.5);
	
	//���������ջ����ӡ��Щֵ 
	while( !is_empty_int()){
		printf("Popping %d\n",top_int());
		pop_int();
	}
	
	//��ո�������ջ����ӡ��Щֵ	
	while(!is_empty_float()){
		printf("Popping %f\n",top_float());
		pop_float();
	}
	
	return EXIT_SUCCESS;
}
