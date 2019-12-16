#include <stdio.h>

int main()
{
	double sum = 100;
	double d , t;
	int i;
	t = sum;
	for(i=1;i<=20;i++){
		d = t / 2;
		t = t / 2;
		sum+=d;
	}
	printf("它共经过%fm，第十次反弹%fm。",sum,d);
	
}
