#include <stdio.h>
//�ж���������������Ҫע�� ��������
//��������֮�ʹ��ڵ����ߺ�����֮��С�ڵ����߲���������
//����߳�ʱ��һ�����������ҳ����̱� 
int main()
{
	float a , b, c , tmp;
	scanf("%f %f %f",&a,&b,&c);
	
	if(b > a){
		tmp = a;
		a = b;
		b = tmp;
	}	
	if(c > a){
		tmp = a;
		a = c;
		c = tmp;
	}	
	if(c >b ){
		tmp = b;
		b = c ;
		c = tmp;
	}
	
	if(c < 0 || b + c < a){
		printf("�ⲻ��һ��������\n");
	}else if(a==b && b==c){
		printf("����һ���ȱ�������\n");		
	}else if(a==b || b==c){
		printf("����һ������������\n");
	}else printf("����һ�����ȱ�������");

	return 0;
}
