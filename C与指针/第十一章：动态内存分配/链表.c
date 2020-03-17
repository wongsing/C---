/*
** 
这个程序有许多同样不错的变体.如果清单太多
更长的时间，最好有一个指向列表末尾的指针，以简化插入。
Create a particular linked list of dynamically allocated nodes.
创建动态分配的节点的特定链接列表
*/
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
typedef struct NODE {
	int value;
	struct NODE *link;
} Node;


Node *
newnode( int value ){
	Node *new;
	new = (Node *)malloc( sizeof( Node ) );
	assert( new != 0 );
	new ->value = value;
	return new;
}

main()
{
	Node *head;
	head = newnode( 5 );
	head->link = newnode( 10 );
	head->link->link = newnode( 15 );
	head->link->link->link = 0;
}
