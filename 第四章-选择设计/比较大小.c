#include <stdio.h>
//�Ƚ�abc�������Ǹ�ֵ 

int max1(int a , int b , int c);
int main(){
	int a , b ,c;
	int max,m;
	scanf("%d %d %d",&a,&b,&c);
	m=max1(a,b,c);
	if(a>b){
		if(a>c) max=a;
		else	max=c;	
	}else if(b>c){
		max=b;
	}else max=c;

	printf("The max is %d\n",max);
	printf("The max is %d",m);
	return 0;
}
//�������ʽ 
int max1(int a , int b , int c)
{
	int temp,max;
	temp=(a>b)?a:b;
//������ʾ������������������a����֮����b 
	max=(temp>c)?temp:c;
	return max;
}

