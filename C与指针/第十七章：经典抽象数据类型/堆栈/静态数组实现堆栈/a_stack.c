#include "stack.h"
#include <assert.h>
//用静态数组实现堆栈 
#define	STACK_SIZE	100  //堆栈中值数量的最大限制 

//存储堆栈中值的数组和一个指向堆栈顶部元素的指针 
static	STACK_TYPE	stack[STACK_SIZE];
static	int			top_element = -1;


void push(STACK_TYPE value)
{
	assert( !is_full());
	top_element += 1;
	stack[top_element] = value;
}

void pop(void)
{
	assert( !is_empty());
	top_element -= 1;
}

STACK_TYPE top(void)
{
	assert( !is_empty());
	return stack[top_element];
}

int is_empty(void)
{
	return top_element == -1;
}

int is_full(void)
{
	return top_element == STACK_SIZE - 1;
}
