#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(node)
//������̬������ʼ��������� 
typedef struct Student
{
	long num;
	float score;
	struct Student *next;
}node;

int n ; 	             //ȫ�ֱ�����������(ѧ����Ϣ����) 
node *creat(void);       //������̬���� 
void print(node *head);	 //������� 
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

