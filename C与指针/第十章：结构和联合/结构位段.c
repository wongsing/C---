#include <stdio.h>

struct {
	int a:2;
}x;
//λ��Ϊ2��ֵ�Ļ�Ϊ����2
//��Ϊ��������int�������з��Ż����޷��� 
 int main()
 {
	x.a=1;
	x.a+=1;
	printf("%d\n",x.a);

 	return 0;
 }
