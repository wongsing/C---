#include <stdio.h>
//建立简单的静态链表 
struct Student
{
	int num;
	float score;
	struct Student * next;
};

int main()
{
	struct Student a,b,c,*head,*p;
	a.num = 10101;a.score=89.5;
	b.num = 10103;b.score=90;
	c.num = 10107;c.score=85;
	head = &a;   //结点a的起始位置赋给头指针head 
	a.next = &b;
	b.next = &c;
	c.next = NULL;//结点c的next成员不存放其他结点的地址表示结束 
	p = head;	//p指向a结点 
do
{
	printf("%ld %5.1f\n",p->num,p->score);
	p = p->next;
}while(p != NULL);

	return 0;
}
