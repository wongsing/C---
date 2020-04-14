#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <assert.h>

//����ʵ�ֶ�ջ 
#define FALSE 0

typedef		struct STACK_NODE{
	STACK_TYPE	value;
	struct STACK_NODE	*next;
}stacknode;

//ָ���ջ�е�һ���ڵ��ָ�� 
static	stacknode *stack;

//�պ�����������ʽ��ջ��������������is_fullʼ�շ��ؼ� 
void create_stack( size)
{
}
//�����Ӷ�ջ�е���Ԫ�أ�ֱ����ջΪ�� 
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
