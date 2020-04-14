#include "tree.h"
#include <assert.h>
#include <stdio.h>

#define		TREE_SIZE  100  //����Ԫ�����������ֵ 
#define		ARRAY_SIZE	(TREE_SIZE + 1)

//���ڴ洢�������нڵ������ 
static		TREE_TYPE tree[ARRAY_SIZE];

//����һ���ڵ����ӵ��±� 
static int left_child(int current)
{
	return current * 2;
}

//����һ���ڵ��Һ��ӵ��±�
static int right_child(int current)
{
	return current * 2 + 1 ;
}

void insert(TREE_TYPE value)
{
	int current;
	//ȷ��ֵ���㣬��Ϊ��������ʾһ��δʹ�õĽڵ� 	
	assert(value != 0);
	//�Ӹ��ڵ㿪ʼ	
	current = 1;
	
	//�Ƚڵ�ֵС�ķ�����������ķ����ұߣ������г����ظ���ֵ 
	while(tree[current] != 0){
		if(value < tree[current])
			current = left_child(current);
		else{
			assert(value != tree[current]);
			current = right_child(current);
		}
		assert(current < ARRAY_SIZE);
	}	
	tree[current] = value;
}

TREE_TYPE *find(TREE_TYPE value)
{
	int current;
	
	current = 1;
	//�Ӹ��ڵ㿪ʼ���ҵ��Ǹ�ֵ�ͽ�����ʵ����� 
	while(current < ARRAY_SIZE && tree[current] != value){
		if(value <tree[current])
			current = left_child(current);
		else
			current = right_child(current);			
	}
	if(current < ARRAY_SIZE)
		return tree + current;
	else
		return 0;
}

//do_pre_order_traverse
//ִ������ǰ��������������Ǳ��浱ǰ����Ľڵ���Ϣ 
static void
do_pre_order_traverse(int current,
void (*callback)(TREE_TYPE value))
{
	if(current < ARRAY_SIZE && tree[current] != 0)
	{
		callback(tree[current]);
		do_pre_order_traverse(left_child(current),callback);
		do_pre_order_traverse(right_child(current),callback);		
	}
}

void pre_order_traverse(void(*callback)(TREE_TYPE value))
{
	do_pre_order_traverse(1,callback);
}
