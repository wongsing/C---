#include <stdio.h>
//������ 
int main()
{
	int i , n,cnt = 0;
	printf("1~100�ڵ�������:\n");
	for(i=2;i<=100;i++){
		for(n=2;n<i;n++){
			if(i%n==0) break;
		}
		if(n==i){
			printf("%4d",i);
			cnt++;
			if(cnt%5==0) printf("\n");

		}
	}
}
