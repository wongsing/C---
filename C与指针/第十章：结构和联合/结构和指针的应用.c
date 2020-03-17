#include <stdio.h>
//结构和指针的应用 
struct NODE {
	int a;
	struct NODE *b;
	struct NODE *c;
};

 int main()
 {
struct NODE  nodes[5] = {
	{ 5,     nodes + 3 ,   NULL},
	{ 15,    nodes + 4 ,   nodes + 3},
	{ 22,    NULL,         nodes + 4},
	{ 12,    nodes + 1 ,   nodes },
	{ 18,    nodes + 2 ,   nodes + 1}
};
	struct NODE *np    = nodes + 2;
	struct NODE **npp  = &nodes[1].b ;
	
	printf("nodes:%d\n",nodes);
	printf("nodes.a是错的,因为数组名是首元素地址不是结构!\n");
	printf("nodes[3].a:%d\n",nodes[3].a);
	printf("nodes[3].c:%d\n",nodes[3].c);//因为该项是数组名，所以是首地址
	printf("nodes[3].c->a:%d\n",nodes[3].c->a);	//->相当于指针的间接访问*，所以是该内存的值 
	printf("*nodes:%d,%d,%d\n",*nodes); //输出第一个数组的所有值 
	printf("*nodes.a是错的，因为数组名是首元素地址不是结构!\n"); 
	printf("(*nodes).a:%d\n",(*nodes).a);//访问第一个数组，然后指向成员a
	printf("nodes->a:%d\n",nodes->a);//->与*一样，同上
	printf("nodes[3].b->b:%d\n",nodes[3].b->b);	//结构中b指向结构，所以就是下一个结构的起始位置 
	printf("*nodes[3].b->b:%d %d %d\n",*nodes[3].b->b);	//同上
	printf("&nodes:%d\n",&nodes);
	printf("&nodes[3].a:%d\n",&nodes[3].a);	
	printf("&nodes[3].c:%d\n",&nodes[3].c);	
	printf("&nodes[3].c->a:%d\n",&nodes[3].c->a);
	printf("&nodes->a:%d\n",&nodes->a);	
	printf("np:%d\n",np);//相当于向下移两个数组nodes[2]
	printf("np->a:%d\n",np->a); //->和*是一样的
	printf("np->c->c->a:%d\n",np->c->c->a);//先是nodes[2]指向c，nodes+4到nodes[1],在指向c，nodes+3到nodes[1],指向a就是15
	printf("npp:%d\n",npp);//相当于nodes[1].b的地址 
	printf("npp->a错的，因为该指针是地址不是结构!\n"); 
	printf("*npp:%d\n",*npp);//nodes[1].b是nodes+4 指向nodes[4]就是首元素地址	
	printf("**npp:%d %d %d \n",**npp);//nodes[4]的所有值 
	printf("*npp->a错的，它不是结构，而是指向结构数组的指针\n");	 
	printf("(*npp)->a:%d\n",(*npp)->a);//nodes[1].b是nodes+4 指向nodes[4],再指向a就是a的值18 
	printf("&np:%d\n",&np);//首元素
	printf("&np->a:%d\n",&np->a);//数组nodes[2]首元素地址
	printf("&np->c->c->a:%d\n",&np->c->c->a);//数组nodes[0].c因为是NULL										 

 	return 0;
 }
