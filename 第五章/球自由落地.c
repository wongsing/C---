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
	printf("��������%fm����ʮ�η���%fm��",sum,d);
	
}
