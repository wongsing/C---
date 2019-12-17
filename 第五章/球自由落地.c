#include <stdio.h>
//球自由落地，每次反弹原高度一半
//主要问题是路程，要考虑落地反弹 
int main()
{
	double sum = 0;
	double d , t;
	int i;
	t = 100;  //原有高度 
	//定义十次的自由落地 
	for(i=1;i<=10;i++){
		d = t / 2;  //反弹高度
		sum=sum+d+t;   //路程=落地路程+反弹 
		t = t / 2;  //原有高度逐次减半 

	}
		sum=sum-d;   //总数减去最后一次反弹的高度 
	printf("它共经过%fm，第十次反弹%fm。",sum,d);
	return 0;
}
