#include <stdio.h>
//比较abc中最大的那个值 

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
//条件表达式 
int max1(int a , int b , int c)
{
	int temp,max;
	temp=(a>b)?a:b;
//（）表示条件，？若成立则是a；反之则是b 
	max=(temp>c)?temp:c;
	return max;
}

