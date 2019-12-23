#include <stdio.h>
//求第五个学生的年龄，每个学生比前一个学生大两岁，第一个学生是十岁
//需要用到递归，也就是函数直接间接利用函数本身 
int main(){
	int age(int n);
	printf("No.5,age:%d\n",age(5));
	return 0;
}

//定义递归函数 
int age(int n)
{
	int c;
	if(n==1) c=10;
	else c=age(n-1)+2;
//先回溯，从n=5-->1
//后递推，从n=1-->5 
	return(c);
}
