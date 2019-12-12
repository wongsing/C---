#include <stdio.h>
#include <math.h>

//求100~200之间的素数 
int main()
{
	int i ,j ;
	int prime=1;
	int cnt = 0;
//因为偶数一定不是素数，所以只考虑奇数，提高效率, 
//从101开始每次加2
//只判断2~根号i之间 ，逐一判断影响效率 
	for(i=101;i<=200;i=i+2){
		int k;
		k=sqrt(i);
		for(j=2;j<=k;j++){
			if(i%j==0){
				prime=0;
				break;
			}
			prime=1;
		}
		if(prime==1){
		cnt++;
		printf("%d ",i);
	//按照五个一行输出; 
		if(cnt%5==0)printf("\n"); 	
		}
}
	return 0;
	
}
