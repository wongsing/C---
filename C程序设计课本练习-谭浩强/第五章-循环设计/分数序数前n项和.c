#include <stdio.h>
//分数序数前n项和，2/1+3/2+5/3+8/5+....
//首先分数得用double类型
//找出分子分母关系，设置存储值 
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
