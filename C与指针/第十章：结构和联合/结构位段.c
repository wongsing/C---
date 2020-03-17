#include <stdio.h>

struct {
	int a:2;
}x;
//位段为2，值的话为正负2
//因为编译器对int可能是有符号或者无符号 
 int main()
 {
	x.a=1;
	x.a+=1;
	printf("%d\n",x.a);

 	return 0;
 }
