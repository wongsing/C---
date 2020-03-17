#include <stdio.h>
//猴子吃桃
//需从后面往前推 
int main()
{
	int x = 1;  //最后一天剩的一个桃子 
	int i;	
	for(i=1;i<10;i++){
		x=(x+1)*2;   
	}
	printf("%d",x);
	return 0;
	
}
