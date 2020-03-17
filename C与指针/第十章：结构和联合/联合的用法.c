#include <stdio.h>
//联合被当做结构用，联合的所有变量都存储在同一内存
//最后字符能够正常输出，它覆盖前面的值 
union {
	int      a;
	float    b;
	char 	 c;
}x;

 int main()
 {
	x.a=25;
	x.b=3.14;
	x.c= 'x';
	printf("%d %g %c\n",x.a,x.b,x.c);
 	return 0;
 }
