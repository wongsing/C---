#include <stdio.h>
//���ϱ������ṹ�ã����ϵ����б������洢��ͬһ�ڴ�
//����ַ��ܹ����������������ǰ���ֵ 
union {
	int      a;
	float    b;
	char 	 c;
}x;

 int main()
 {
	x.a=25;
	x.b=3.14;
	x.c= 'x';
	printf("%d %g %c\n",x.a,x.b,x.c);
 	return 0;
 }
