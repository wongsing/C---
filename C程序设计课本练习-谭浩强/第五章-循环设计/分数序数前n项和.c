#include <stdio.h>
//��������ǰn��ͣ�2/1+3/2+5/3+8/5+....
//���ȷ�������double����
//�ҳ����ӷ�ĸ��ϵ�����ô洢ֵ 
int main()
{
	double s, x , y , t , sum; 
	int i , n;
	x=1;
	y=2;
	sum=0;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		s=y/x;
		sum+=s;
		t=y;
		y=y+x;
		x=t;
	}
	printf("%f",sum);
	return 0;
}
