#include <stdio.h>
//����ʽ
//շת����������Լ�� 
int main(){
	int a , b;
	scanf("%d/%d",&a,&b);
	
	int m , n , t ;    
	m = a ;     //m ��������a
	n = b ;		//n ��������b 
	t = 0 ;		//a ���� b ������ 
	while(n!=0){       //��n=0ʱ������m��Ϊ���Լ�� 
		t = m % n ;    //a ���� b ������ 
		m = n ;        //�� a = b �� 
		n = t ;        //�� b = ����t�� 
	}
	a/=m;     //���ӷ�ĸ�������Լ�� 
	b/=m;
	printf("%d/%d",a,b);
	return 0 ;
}
