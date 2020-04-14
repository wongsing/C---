#include <stdio.h>
#include <stdlib.h>
#include "g_stack.h"
//使用泛型数组堆栈 
GENERIC_STACK (int ,_int ,10)
GENERIC_STACK (float ,_float ,5)
//创建两个堆栈，一个整数堆栈，一个浮点数堆栈 
int main( ) {
	//往每个堆栈压入值 
	push_int(5);
	push_int(22);
	push_int(15);
	push_float(25.3);
	push_float(-40.5);
	
	//清空整数堆栈并打印这些值 
	while( !is_empty_int()){
		printf("Popping %d\n",top_int());
		pop_int();
	}
	
	//清空浮点数堆栈并打印这些值	
	while(!is_empty_float()){
		printf("Popping %f\n",top_float());
		pop_float();
	}
	
	return EXIT_SUCCESS;
}
