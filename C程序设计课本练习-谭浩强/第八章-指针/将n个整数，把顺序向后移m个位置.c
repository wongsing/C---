#include <stdio.h>
#define N 10
//��n����������ǰ��˳��������m��λ�� 
void fun(int *a,int m);
int main()
{
	int i,a[N],m;
	printf("������%d��������",N);
	for(i=0;i<N;i++) scanf("%d",&a[i]);
	printf("��������Ҫ���Ƶ�λ�ã�");
	scanf("%d",&m);
	fun(a,m);
	for(i=0;i<N;i++) printf("%d ",a[i]);
	return 0;
}

void fun(int *a,int m)
{
	int *p,i,t;
	p=a;
	for(i=0;i<m;i++){
		t=*p;
		*p=*(p+N-m);
		*(p+N-m)=t;
		p++;
	}
}
