#include <stdio.h>
//��д�����ú����ĵݹ������ x �� n�η���ֵ������nΪ������
float myfun(float a , int b );
int main()
{
	float x;
	int n;
	scanf("%f %d",&x,&n);
	printf("%f��%d�η�����%f\n",x,n,myfun(x,n));
	return 0;
} 

float myfun(float a , int b )
{
	float m;
	if(b==1) m = a;
	else m=a*myfun(a,b-1);
	return m; 
}
