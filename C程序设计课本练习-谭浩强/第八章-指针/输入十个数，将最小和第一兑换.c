#include <stdio.h>
#define N 10
//����ʮ����������С�ĺ͵�һ�����Ի������ĺ����һ�����Ի�
//��ָ�� 
void fun(int *a);
int main()
{
	int a[N],i;
	for(i=0;i<N;i++) scanf("%d",&a[i]);
	fun(a);
	for(i=0;i<N;i++) printf("%d ",a[i]);	
	return 0;
}

void fun(int *a)
{
	int *p1,*p2; //����������ֵ����ֵ ,�Ͳ���Ҫ�����洢�½Ǳ� 
	p1=p2=a;
	int i,max,min,t;
	max=min=*a; //����ֵ����max/min 
	for(i=0;i<N;i++){
		if(a[i]> max){
			max=a[i];
			p1=&a[i]; //�����ֵ�ĵ�ַ����p1ָ�� 
		}
		else if(a[i]< min){
			min=a[i];
			p2=&a[i]; //����Сֵ�ĵ�ַ����p2ָ�� 
		}		
	}
	t=a[0],a[0]=*p2,*p2=t;  //��Сֵ�Ի� 
	t=a[N-1],a[N-1]=*p1,*p1=t;	//���ֵ�Ի� 
}


