#include <stdio.h>
//Çó½×³ËºÍ:1!+2!+3!.... 
int main()
{
	long int i , n ,sum ,amount;
	scanf("%d",&i);
	sum = 1;
	amount = 0;
	for(n=1;n<=i;n++){
		sum *=n;
		amount+=sum;
	}
	printf("%d",amount);
	return 0;
}
