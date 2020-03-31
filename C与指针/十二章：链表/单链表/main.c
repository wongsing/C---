#include <stdio.h>
#include <stdlib.h>
#include "sll_node.h"

#define FALSE	0
#define TRUE	1
#define LEN		sizeof(Node)
/*
typedef struct NODE{
	struct NODE		*link;
	int				value;
}Node;
*/
Node *create(void);
void print(Node *head);
int 
sll_insert1(Node *current , int new_value);
int 
sll_insert2(Node **rootp , int new_value);
int 
sll_insert3(register Node **linkp , int new_value);

int main(int argc, char *argv[]) {
	int ret;
	Node *head;
	head = create();
//	sll_insert1(head,12);
	ret = sll_insert3(&head,3);

	print(head);	
	return 0;
}

Node *create(void)
{
	Node *head,*p,*q;
	p=q=(Node *)malloc(LEN);
	head = NULL;
	int n = 0;
	scanf("%d",&p->value);
	while(p->value != -1){
		n=n+1;
		if(n==1) head = p;
		else q->link = p;
		q=p;
		p=(Node *)malloc(LEN);
		scanf("%d",&p->value);
	}
		q->link=NULL;
		return head;
}

void print(Node *head){
	Node *p;
	p=head;
	if(head != NULL)
		do{
			printf("%d ",p->value);
			p=p->link;
		}while(p!=NULL);
}
int 
sll_insert1(Node *current , int new_value)
{
	Node *previous;
	Node *new;
	
	while(current->value <new_value){
		previous = current ;
		current = current->link;
	}
	
	new = (Node *)malloc(LEN);
	if(new==NULL)
		return FALSE;
	new->value = new_value;
	
	new->link = current;
	previous->link = new;
	return TRUE;
}

int 
sll_insert2(Node **rootp , int new_value)
{
	Node *current;
	Node *previous;
	Node *new;
	
	current = *rootp;
	previous = NULL;
	
	while(current!= NULL &&current->value <new_value){
		previous = current ;
		current = current->link;
	}
	
	new = (Node *)malloc(LEN);
	if(new==NULL)
		return FALSE;
	new->value = new_value;
	new->link = current;
	if(previous == NULL)
		*rootp = new ;
	else
		previous->link = new;
	return TRUE;
}

int 
sll_insert3(register Node **linkp , int new_value)
{
	register Node *current;
	register Node *new;
	
	while((current = *linkp)!= NULL &&current->value <new_value){
		linkp = &current->link;
	}
	
	new = (Node *)malloc(LEN);
	if(new==NULL)
		return FALSE;
	new->value = new_value;
	
	new->link = current;
	*linkp=new;
	return TRUE;
}





