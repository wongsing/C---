#include <stdio.h>
int main ()

{
	int cost1,cost2,cost3;
	double distant;
	int time;
	scanf("%lf %d",&distant ,&time);
	
	cost1 = 0;
	cost2 = 0;
	cost3 = 0;
	
	if(distant<=3){
		cost1 = 10;
	}else if(distant>3 && distant <= 10){
		cost1 = (distant-3)*2 + 10+0.5;                //��������+0.5ȡ����������ȡ1��С����ȡ0�� 
	}else {
		cost1 = (distant - 10) * 3 + 7*2 +10+0.5;     
	}
	if(time>=5){
		cost2 = time/5 *2;
	}else {
		cost2 = 0;
	}
	
	cost3 = cost1 + cost2;
	printf("%d",cost3);
	return 0;
}
