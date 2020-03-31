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
	//˫������ͷβΪ�գ�ͷ�������ֵ,p2�൱��tail 
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
//�鿴value �Ƿ�������������У������򷵻�
//���򣬾ʹ���һ���½ڵ�newnode�������
//����ֵ���ڴ治����޷����룬-1������ֵ�����д��ڣ�0������ɹ���1.
//thisָ���ǲ����½ڵ�ǰ���Ǹ��ڵ�
//nextָ���ǲ����½ڵ����Ǹ��ڵ� 
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
//���1,2������λ������β�� 
	if(next != NULL){         //���1������λ������ͷ�� 
		if(this != rootp){
			newnode->fwd = next;
			this->fwd = newnode;
			newnode->bwd = this;
			next->bwd = newnode; 
		}
		else{              //���2��λ������ͷ�� 
			newnode->fwd = next;
			rootp->fwd = newnode;
			newnode->bwd = NULL;
			next->bwd = newnode;
		}
	}
//���3��4λ������β�� 
	else{     
		if(this != rootp){  //���3������λ������β�� 
			newnode->fwd = NULL;
			this->fwd = newnode;
			newnode->bwd = this;
			rootp->bwd = newnode;
		}
		else{     //���4��λ������β�� 
			newnode->fwd = NULL;
			rootp->fwd = newnode;
			newnode->bwd = NULL;
			rootp->bwd = newnode;
		}
	}
	return 1;
}
//�򻯰汾 
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

