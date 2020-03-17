#include <stdio.h>
//厘米换算英尺英寸
//(foot+inch/12)×0.3048
//inch算是小数部分 
//英尺foot和英寸inch 
int main()

{	
	int x ;
	int foot;
	int inch;
	
	scanf("%d",&x);
	
	foot = x/30.48;  
//取整 
	inch = (x/30.48-foot)*12;
//x/30.48-->自动类型转换成double，减去整数，剩下小数部分-->再乘以12换算	
	printf("%d %d",foot,inch);					
	return 0;
}

