#include <stdio.h>
//�ṹ��ָ���Ӧ�� 
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
	printf("nodes.a�Ǵ��,��Ϊ����������Ԫ�ص�ַ���ǽṹ!\n");
	printf("nodes[3].a:%d\n",nodes[3].a);
	printf("nodes[3].c:%d\n",nodes[3].c);//��Ϊ���������������������׵�ַ
	printf("nodes[3].c->a:%d\n",nodes[3].c->a);	//->�൱��ָ��ļ�ӷ���*�������Ǹ��ڴ��ֵ 
	printf("*nodes:%d,%d,%d\n",*nodes); //�����һ�����������ֵ 
	printf("*nodes.a�Ǵ�ģ���Ϊ����������Ԫ�ص�ַ���ǽṹ!\n"); 
	printf("(*nodes).a:%d\n",(*nodes).a);//���ʵ�һ�����飬Ȼ��ָ���Աa
	printf("nodes->a:%d\n",nodes->a);//->��*һ����ͬ��
	printf("nodes[3].b->b:%d\n",nodes[3].b->b);	//�ṹ��bָ��ṹ�����Ծ�����һ���ṹ����ʼλ�� 
	printf("*nodes[3].b->b:%d %d %d\n",*nodes[3].b->b);	//ͬ��
	printf("&nodes:%d\n",&nodes);
	printf("&nodes[3].a:%d\n",&nodes[3].a);	
	printf("&nodes[3].c:%d\n",&nodes[3].c);	
	printf("&nodes[3].c->a:%d\n",&nodes[3].c->a);
	printf("&nodes->a:%d\n",&nodes->a);	
	printf("np:%d\n",np);//�൱����������������nodes[2]
	printf("np->a:%d\n",np->a); //->��*��һ����
	printf("np->c->c->a:%d\n",np->c->c->a);//����nodes[2]ָ��c��nodes+4��nodes[1],��ָ��c��nodes+3��nodes[1],ָ��a����15
	printf("npp:%d\n",npp);//�൱��nodes[1].b�ĵ�ַ 
	printf("npp->a��ģ���Ϊ��ָ���ǵ�ַ���ǽṹ!\n"); 
	printf("*npp:%d\n",*npp);//nodes[1].b��nodes+4 ָ��nodes[4]������Ԫ�ص�ַ	
	printf("**npp:%d %d %d \n",**npp);//nodes[4]������ֵ 
	printf("*npp->a��ģ������ǽṹ������ָ��ṹ�����ָ��\n");	 
	printf("(*npp)->a:%d\n",(*npp)->a);//nodes[1].b��nodes+4 ָ��nodes[4],��ָ��a����a��ֵ18 
	printf("&np:%d\n",&np);//��Ԫ��
	printf("&np->a:%d\n",&np->a);//����nodes[2]��Ԫ�ص�ַ
	printf("&np->c->c->a:%d\n",&np->c->c->a);//����nodes[0].c��Ϊ��NULL										 

 	return 0;
 }
