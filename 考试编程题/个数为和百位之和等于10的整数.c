#include<stdio.h>
//���и�λ���Ͱ�λ��֮��Ϊ10����λ������
int main()
{	
	int i , m , n ,sum ,cnt = 0;
	for(i=100;i<1000;i++){
		m = i % 10;
		n = i / 100;
		sum = m + n ;
		if(sum == 10){
			printf("%d\t",i);
			cnt++;
			if(cnt %5 == 0)
				printf("\n");
		}
	}
	return 0;
}
