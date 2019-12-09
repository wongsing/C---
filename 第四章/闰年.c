#include <stdio.h>
//求闰年
//条件是1.能被4整除，但不能被100整除；2.能被400整除 
int runyear1(int a);
int runyear2(int b);
int main ()
{
	int year,leap;
	scanf("%d",&year);
	

//	leap =runyear1(year);
	leap =runyear2(year);	
	if(leap)
		printf("%d is ",year);
	else
		printf("%d is not ",year);
	printf("a leap year.\n");
	return 0; 
	 
}

int runyear1(int a){
	int leap1 ;
	if(a%4!=0){
		leap1 = 0;
	}else if(a%100!=0){
		leap1 = 1;
	}else if(a%400==0){
		leap1 = 1; 
	}else leap1 = 0;
	return leap1;
}

int runyear2(int b){
	int leap2;
	if(b%4==0){
		if(b%100==0){
			if(b%400==0){
				leap2=1;
			}
				leap2=0;
		}else	leap2=1;
	}else	leap2=0;
	return leap2;
}




