#include <stdio.h>
void fun(int x );
int main()
{
	int x = 123456;
	fun(x);
	return 0;
}

void fun(int x )
{
	int y = x ;
	if(y >= 10){
		printf("%d-",y%10);
		fun(x/10);
	}else printf("%d",x);
}
