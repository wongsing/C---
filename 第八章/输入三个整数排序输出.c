#include <stdio.h>
//����������������С�������
//���˼�룬�������Ƚϣ���һ���м��������ֵ
//1--->2,1--->3,2--->3 
int main()
{
	int a, b ,c,*p1,*p2,*p3,t;
	p1=&a;
	p2=&b;
	p3=&c;
	scanf("%d %d %d",p1,p2,p3);
	if(*p1>*p2){
		t=*p1;
		*p1=*p2;
		*p2=t;
	}
	if(*p1>*p3){
		t=*p1;
		*p1=*p3;
		*p3=t;
	}
	if(*p2>*p3){
		t=*p2;
		*p2=*p3;
		*p3=t;	
	}
	printf("%d %d %d\n",a,b,c); 
	return 0;
	
}
