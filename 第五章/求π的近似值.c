#include <stdio.h>
#include <math.h>
//��еĽ���ֵ 
//��/4=1-1/3+1/5-1/7+... 
//cnt�ǱȽ�ѭ���˼��� 
int main()
{
	int sign =1;
	double pi=0,n=1,term=1.0;
	int cnt1,cnt2;
	cnt1=0;
	cnt2=0; 
	while(fabs(term)>=1e-6)
	{
		pi=pi+term;
		n=n+2;
		sign=-sign;
		term=sign/n;
		cnt1++;
	}
	while(fabs(term)>=1e-8)
	{
		pi=pi+term;
		n=n+2;
		sign=-sign;
		term=sign/n;
		cnt2++;
	}	
	pi=pi*4;
	printf("pi=%10.8f\n",pi);
	printf("cnt1��%d,cnt2��%d",cnt1,cnt2);
	return 0;
} 
