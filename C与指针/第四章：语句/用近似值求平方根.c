#include <stdio.h>
//���ý���ֵ��ƽ����,��ǰ�����ֵ���ʱ��ƽ������������� 
//��������ֱ����Ǹ����ͣ���Ϊ��ʽ��Ҫ���� 
int main()
{
	double a1 = 1 , a2 , a3 , a4 ,n;
	printf("������һ������:");
	scanf("%lf",&n);
	if(n>0){
do{	
	a2 = a1;	
	a1 = (a2+n/a2)/2;
	printf("%f\n",a1);	
}while(a2!=a1);	
	printf("%f��ƽ������%f\n",n,a1);	
	}
	else printf("��ֵ�Ǹ�ֵ\n");
	return 0;
}



