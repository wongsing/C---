#include "tree.h"
#include <assert.h>
#include <stdio.h>
#include <malloc.h>
//ʹ�ö�̬���������ʵ�ֶ�����
//����ֵ��ʱ�򣬾����Һ���λ�ò��룬�������ظ�ֵ���ҵ�λ�þͿ����µĽڵ㣬�õ�ǰ�ڵ�ָ������µĽڵ� 
//��ֵ��ʱ��Ҳ�ǰ�����˲��ң�������С�ڽڵ㣬���������ڽڵ㣬û���ظ�ֵ
//���ִ��һ��ǰ����� 

//treenode�ṹ������ֵ��ָ��ĳ�����ڵ��ָ�� 
typedef struct TREE_NODE{
	TREE_TYPE	value;
	struct	TREE_NODE *left; 
	struct	TREE_NODE *right;	
}treenode;

//ָ�������ڵ��ָ�� 
static		treenode *tree;

void insert(TREE_TYPE value)
{
	treenode *current;
	treenode **link;
	//�Ӹ��ڵ㿪ʼ 
	link = &tree;
	
	while((current = *link) != NULL){
	//���������������������������ȷ��û���ظ�ֵ���֣� 
		if(value <current->value)
			link = &current->left;
		else{
			assert(value != current->value);
			link = &current->right;
		}
	}
	//����һ���½ڵ㣬ʹlinkָ���� 
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
	//�Ӹ��ڵ㿪ʼ��ֵ��������ʵ����� 
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

//ִ��һ��ǰ����������ڱ����������ڴ���Ľڵ���Ϣ 
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
