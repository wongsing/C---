#include <stdio.h>
#include <math.h> 
//�ݹ齫����ת�����ַ��� 
int x[10];  
int pf(unsigned long m,int n)  
{	int y;  
	if(n==0) {y=(int)(m%10);x[0]=y;} //ȡ�����һλ������������ĵ�һλ 
	else {y=(unsigned long)((m-pf(m,n-1))/pow(10,n))%10;x[n]=y;} 
							//m-����,Ȼ������ȥ��һλ�������%10���͵���y 
	return(y);  
}  
int main()  
{	unsigned long a,b;
	int i,j,k;
	char c[11];  
	scanf("%ld",&a);  
	for(j=0,b=a;b>0.1;j++,b/=10);  
	pf(a,j-1);  
	for(i=0,k=j-1;i<j;i++,k--)  //������� 
	c[i]=x[k]+48; 
	c[10]='\0';
	puts(c);
}  
