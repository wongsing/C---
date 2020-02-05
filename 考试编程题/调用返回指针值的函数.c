 #include <stdio.h>
 int *f(int *p);  //指向指针的返回指针值得函数 
int main()
{
	int i;
	f(&i);
	*f(&i)=6;
	int *p=f(&i);
//	f(&(i+6));  "i+6"是一个算术表达式，不能用&取地址，也没有地址 
	return 0;
} 
int *f(int *p)
{
	return 0;
}
