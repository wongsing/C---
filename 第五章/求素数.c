#include <stdio.h>
#include <math.h>
//��һ�����Ƿ�Ϊ���� 
int prime(int a);
int main()
{
	int num,num1;
	scanf("%d",&num);
	int i,ture;
	ture = 1;
//ֻ�豻2~����n�������� 
	num1=prime(num);
//��Ҫ2~n-1�������� 
	for(i=2;i<num;i++){
		if(num%i==0){
			ture=0;
			break;
		}
	}
	if(ture==0)printf("1.��������\n");
	else printf("1.������\n");	

	return 0;
}

int prime(int a)
{
	int k ;
	k=sqrt(a);
//����ȡ�� 
	int i;
	for(i=2;i<=k;i++)
		if(a%i==0)break;
	if(i<k)printf("2.�ⲻ������\n");
	else printf("2.��������\n");
	
	return 0;
}
