#include <stdio.h>
#include <math.h>
//��ƽ���� 
int main(){
	int a ;
	double b ; 
	scanf("%d",&a);
	if(a>=0&&a<=1000){
		b = sqrt(a);
		printf("%2.0f",b);
//1000���ڵ�ƽ�����������ֲ�����λ������%m.nf�����m��Ϊ2��nС��������ȥ 
	}else printf("��������");

	return 0;
}
