#include <stdio.h>
#include <stdlib.h>
#include "double_linked_list_node.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
node* create(void);
void print(node *head);
int
insert1(node *rootp, int value);
int
insert2(register node *rootp, int value);

int main(int argc, char *argv[]) {
	node *head;
	head=create();
	print(head);
	return 0;
}

/*
typedef struct NODE{
	struct NODE *fwd;
	struct NODE *bwd;
	int 	value;
}node;
*/
node* create(void)
{
	//双向链表头尾为空，头结点无数值,p2相当于tail 
	node *head;
	node *p1,*p2;
	head=p2=(node *)malloc(sizeof(node));
	head->bwd=NULL;
	int n ;
	scanf("%d",&n);
	while(n != -1){			
 		p1=(node*)malloc(sizeof(node));
		p2->fwd=p1;
		p1->bwd=p2;		
		p2=p2->fwd;
		p2->value = n;
		scanf("%d",&n);		
	}
		p2->fwd=NULL;
		return head;
} 

void print(node *head)
{
	node *p;
	p=head->fwd;
	if(head!=NULL)
		do{
			printf("%d ",p->value);
			p=p->fwd;			
		}while(p!=NULL);
}

int
insert1(node *rootp, int value)
{
//查看value 是否存在于新链表中，若是则返回
//否则，就创建一个新节点newnode插进链表
//返回值：内存不足或无法插入，-1；插入值链表中存在，0；插入成功，1.
//this指的是插入新节点前的那个节点
//next指的是插入新节点后的那个节点 
	node *this; 
	node *next;
	node *newnode;

	for(this = rootp;(next = this->fwd)!=NULL;this = next){
		if(next->value == value)
			return 0;
		if(next->value >value)
			break;
}
	newnode = (node *)malloc(sizeof(node));
	if(newnode == NULL)
		return -1;
	newnode->value = value;
//情况1,2：并非位于链表尾部 
	if(next != NULL){         //情况1：并非位于链表头部 
		if(this != rootp){
			newnode->fwd = next;
			this->fwd = newnode;
			newnode->bwd = this;
			next->bwd = newnode; 
		}
		else{              //情况2：位于链表头部 
			newnode->fwd = next;
			rootp->fwd = newnode;
			newnode->bwd = NULL;
			next->bwd = newnode;
		}
	}
//情况3、4位于链表尾部 
	else{     
		if(this != rootp){  //情况3：并非位于链表尾部 
			newnode->fwd = NULL;
			this->fwd = newnode;
			newnode->bwd = this;
			rootp->bwd = newnode;
		}
		else{     //情况4：位于链表尾部 
			newnode->fwd = NULL;
			rootp->fwd = newnode;
			newnode->bwd = NULL;
			rootp->bwd = newnode;
		}
	}
	return 1;
}
//简化版本 
int
insert2(register node*rootp, int value)
{
	register node *this;
	register node *next;
	register node *newnode;
	
	for(this = rootp;(next = this->fwd)!= NULL;this = next){
		if( next->value == value)
			return 0;
		if(next->value > value)
			break;
	}
	newnode = (node*)malloc(sizeof(node));
	if(newnode == NULL)
		return -1;
	newnode->value = value;
	
	newnode->fwd = next;
	this->fwd = newnode;
	
	if(this != rootp)
		newnode->bwd = this;
	else
		newnode->bwd = NULL;
	
	if(next != NULL)
		next->bwd = newnode;
	else
		rootp->bwd = newnode;
		
	return 1;
}

