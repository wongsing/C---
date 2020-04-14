#include "tree.h"
#include <assert.h>
#include <stdio.h>
#include <malloc.h>
//使用动态分配的链表实现二叉树
//插入值的时候，就先找合适位置插入，不能有重复值，找到位置就开辟新的节点，让当前节点指向插入新的节点 
//找值的时候，也是按照如此查找，左子树小于节点，右子树大于节点，没有重复值
//最后执行一遍前序遍历 

//treenode结构包含了值和指向某个树节点的指针 
typedef struct TREE_NODE{
	TREE_TYPE	value;
	struct	TREE_NODE *left; 
	struct	TREE_NODE *right;	
}treenode;

//指向树根节点的指针 
static		treenode *tree;

void insert(TREE_TYPE value)
{
	treenode *current;
	treenode **link;
	//从根节点开始 
	link = &tree;
	
	while((current = *link) != NULL){
	//根据情况进入左子树或右子树（确保没有重复值出现） 
		if(value <current->value)
			link = &current->left;
		else{
			assert(value != current->value);
			link = &current->right;
		}
	}
	//开辟一个新节点，使link指向它 
	current = malloc(sizeof(treenode));
	assert(current != NULL);
	current->value = value;
	current->left = NULL;
	current->right = NULL;
	*link = current;
}


TREE_TYPE *find(TREE_TYPE value)
{
	treenode *current;
	//从根节点开始找值，进入合适的子树 
	current = tree;
	
	while(current != NULL &&current->value != value){
		if(value < current->value)
			current = current->left;
		else
			current = current->right;
	}
	
	if(current != NULL)
		return &current->value;
	else
		return NULL; 
}

//执行一遍前序遍历，用于保存我们正在处理的节点信息 
static void
do_pre_order_traverse(treenode *current,
void(*callback)(TREE_TYPE value))
{
	if(current != NULL){
		callback(current->value);
		do_pre_order_traverse(current->left,callback);
		do_pre_order_traverse(current->right,callback);
	}
}

void pre_order_traverse(void(*callback)(TREE_TYPE value))
{
	do_pre_order_traverse(tree,callback);
}
