#include <stdio.h>
#define N 15
//���ַ���������
//����ȷ��left/right/midֵ
 
int num(int *x , int n, int k);
int main()
{
	int a[N]={40,38,35,33,31,22,18,16,15,14,13,11,10,6,2};
	int b;
	printf("������һ������:");
	scanf("%d",&b);
	int key; 
	 key=num(a,N,b);
	if(key==-1){
		printf("�޴���!\n");
	}else printf("����������ĵ�%d��Ԫ�ص�ֵ!\n",key+1);
	return 0;
}

int num(int *x , int n, int k)   //����һ��num�������β���һ�����飬����Ԫ���ܺͣ�key word 
{
	int ret = -1;  //�ж��Ƿ���ҳɹ� 
	int left , right , mid , i ;
	left = 0;     //��ֵΪ��һ��Ԫ�� 
	right =N-1;   //��ֵΪ���һ��Ԫ�� 
	mid=(left+right)/2;   //�м�ֵ 
//��Ϊ�����ǴӴ�С�����Ե�K>x[mid]ʱ���轫right����mid-1����֮��Left����mid+1 
	while(k!=x[mid]){     
	if(k>x[mid]){
		right=mid-1;
		mid=(left+right)/2;		
	}else if(k<x[mid]){
		left = mid+1;
		mid=(left+right)/2;
	}
//������������������Ҳ���kֵ����ret=0,˵���޴��� 
	if(left>=right){   
		ret =0;
		break;
	} 
				
	}
	if(ret==0) mid=-1;				
	return mid;
	
}
