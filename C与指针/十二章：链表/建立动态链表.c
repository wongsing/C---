#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(node)
//建立动态链表，初始化并且输出 
typedef struct Student
{
	long num;
	float score;
	struct Student *next;
}node;

int n ; 	             //全局变量，结点个数(学生信息个数) 
node *creat(void);       //创建动态链表 
void print(node *head);	 //输出链表 
int main()
{
	node *head;  
	head = creat();
	print(head);
	return 0;
}

node *creat(void)
{ 
	node *head;       
	node *p1 , *p2;
	n = 0;
	p1 = p2 = (node *)malloc(LEN);
	scanf("%ld,%f",&p1->num,&p1->score);
	head = NULL;
	while(p1->num!=0){
		n=n+1;
		if(n==1) head=p1;
		else p2->next=p1;
		p2=p1;
		p1=(node*)malloc(LEN);
		scanf("%ld,%f",&p1->num,&p1->score);
	}	
		p2->next = NULL;
		return head;	
}

void print(node *head)
{
	node *p;
	printf("\nNow,These %d records are:\n",n);
	p=head;
	if(head != NULL)
		do{
			printf("%ld %5.1f\n",p->num,p->score);
			p=p->next;
		}while(p!=NULL);
}

