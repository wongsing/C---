#include <stdio.h>
//����һ���������ź�������� 
//���ַ�ʽ��ǰ-->�󣻺�-->ǰ 
void f(int b[] , int n);   //����һ���Ӻ��濪ʼ���Ƚϵĺ��� 

int main()
{
//���� ��̬�ֲ������� 
static int a[7]={1,5,9,13,16,20}; 
	   int i , t;
	scanf("%d",&a[6]);	
	
	f(a,sizeof(a));  //ֱ�ӵ��ú������������飬�Լ������С 
	printf("\n");
//	printf("%d\n",sizeof(a));
	printf("\n");	
	printf("��ǰ�濪ʼ���Ƚϴ�С:\n");
	printf("\n");
	for(i=0;i<7;i++){
		if(a[i]>a[6]){
			t = a[i];
			a[i]=a[6];
			a[6] = t;
		}
	}
	for(i=0;i<7;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}

void f(int b[] , int n){
	printf("�Ӻ��濪ʼ��ǰ�Ƚϴ�С:\n");
	printf("\n");	
	int i,t;
	n = n/4-1;  //������int�ͣ���С����4�������鳤�ȣ��ټ�ȥ1�պ������һ������Ԫ�أ� 
	for(i=n;i>0;i--){
		if(b[i]<b[i-1]){
			t = b[i-1];
			b[i-1]=b[i];
			b[i]=t;
		}
	}
	for(i=0;i<=n;i++){
		printf("%d\t",b[i]);
	}

}
