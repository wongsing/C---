#include <stdio.h>
//����������ֵ
//�ؼ�ѭ��������ͷβ�ֱ�Ե������Ծ������鳤��/2��ǰ������Ҫ�������� 
#define N  5
int main()
{
	int a[N]={8,6,5,4,1};
	int i ,j , t ;
	printf("����ԭ�����Ϊ:");
	for(i=0;i<N;i++) printf("%5d",a[i]);
	printf("\n");
	for(i=0,j=N-1;i<N/2;i++,j--){
		t = a[i];
		a[i] = a[j];
		a[j] = t;
//		printf("a[%d]=%d,a[%d]=%d",i,a[i],j,a[j]);
	}
	printf("����������Ϊ:");
	for(i=0;i<5;i++) printf("%5d",a[i]);
	printf("\n");
	return 0;
}
