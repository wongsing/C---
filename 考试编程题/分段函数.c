#include <stdio.h>
int main()
{
	int x , y;
	scanf("%d",&x);
	if(x<0) y=-5;
	else if(x>0) y=5;
	else y=0;
	printf("x=%d,y=%d\n",x,y);
	return 0; 
}
