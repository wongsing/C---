#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <assert.h>

//链表实现堆栈 
#define FALSE 0

typedef		struct STACK_NODE{
	STACK_TYPE	value;
	struct STACK_NODE	*next;
}stacknode;

//指向堆栈中第一个节点的指针 
static	stacknode *stack;

//空函数，由于链式堆栈不会填满，所以is_full始终返回假 
void create_stack( size)
{
}
//连续从堆栈中弹出元素，直至堆栈为空 
void destory_stack(void)
{
	while(!is_empty())
		pop();
}

void push(STACK_TYPE value)
{
	stacknode	*new_node;
	new_node = malloc(sizeof(stacknode));
	assert(new_node != NULL);
	new_node->value = value;
	new_node->next = stack;
	stack = new_node;
}

void pop(void)
{
	stacknode *first_node;
	assert(!is_empty());
	first_node = stack;
	stack = first_node->next;
	free(first_node);
}

STACK_TYPE top(void)
{
	assert(!is_empty());
	return stack->value;
}

int is_empty(void)
{
	return stack == NULL;
}

int is_full(void)
{
	return FALSE;
}
