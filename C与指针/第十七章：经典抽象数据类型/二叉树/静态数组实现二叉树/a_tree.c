#include "tree.h"
#include <assert.h>
#include <stdio.h>

#define		TREE_SIZE  100  //树中元素数量的最大值 
#define		ARRAY_SIZE	(TREE_SIZE + 1)

//用于存储树的所有节点的数组 
static		TREE_TYPE tree[ARRAY_SIZE];

//计算一个节点左孩子的下标 
static int left_child(int current)
{
	return current * 2;
}

//计算一个节点右孩子的下标
static int right_child(int current)
{
	return current * 2 + 1 ;
}

void insert(TREE_TYPE value)
{
	int current;
	//确保值非零，因为零用于提示一个未使用的节点 	
	assert(value != 0);
	//从根节点开始	
	current = 1;
	
	//比节点值小的放在左树，大的放在右边，不运行出现重复的值 
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
	//从根节点开始，找到那个值就进入合适的子树 
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
//执行依次前序遍历，帮助我们保存当前处理的节点信息 
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
