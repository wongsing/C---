#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	volatile int a=24;/*设置一个我们要读取的变量,volatile 可以告诉gcc不要优化这行代码，仅对变量有效*/
    volatile int b[2]={1,2};/*建立一个数组，这个数组是关键，这时b作为数组指针，指向第一个元素，即
1在堆栈中的储存位置，因此我们就可以利用b来读取堆栈的任意位置（该程序所拥有的堆栈）*/
    volatile int c=b[2];
    printf("%d\n",c);//打印出指定位置堆栈的值
return 0;


}
