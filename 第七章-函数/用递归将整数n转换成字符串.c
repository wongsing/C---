#include <stdio.h>
#include <math.h> 
//递归将整数转换成字符串 
int x[10];  
int pf(unsigned long m,int n)  
{	int y;  
	if(n==0) {y=(int)(m%10);x[0]=y;} //取得最后一位数，放在数组的第一位 
	else {y=(unsigned long)((m-pf(m,n-1))/pow(10,n))%10;x[n]=y;} 
							//m-余数,然后再舍去后一位数，最后%10，就等于y 
	return(y);  
}  
int main()  
{	unsigned long a,b;
	int i,j,k;
	char c[11];  
	scanf("%ld",&a);  
	for(j=0,b=a;b>0.1;j++,b/=10);  
	pf(a,j-1);  
	for(i=0,k=j-1;i<j;i++,k--)  //逆序输出 
	c[i]=x[k]+48; 
	c[10]='\0';
	puts(c);
}  
