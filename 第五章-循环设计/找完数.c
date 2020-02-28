#include <stdio.h>
//找完数
 //首先找出完数，因子和等于数本身
 //然后再循环找出因子
int main()
{
	int i , j ,n;
	int sum=0;
	int amount=0;
	for(n=1;n<1000;n++){
		for(i=1;i<n;i++){
			if(n%i==0){
				sum+=i;
			}			
		}
		if(n==sum) {
			printf("%5d its factors are 1",n);
		for(i=2;i<n;i++){
			if(n%i==0){
			printf(",%d",i);
			}	
		}
		printf("\n");
	}
		sum=0;
}
	return 0;
}
