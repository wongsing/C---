#include <stdio.h>
//指向函数的指针做参数 
int main()
{
	int fun(int x , int y , int (*p)(int,int ));
	int max (int,int);
	int min (int,int);
	int add (int,int);
	int a = 34, b =-21 ,n;
	printf("please choose 1,2 or 3:");
	scanf("%d",&n);
	//函数名就是函数入口地址 ,入口地址传入给fun函数的指向函数的指针变量 
	if(n==1) fun(a,b,max);   
	else if(n==2) fun(a,b,min);
	else if(n==3) fun(a,b,add);
	return 0;
}
//int (*p)(int ,int)-->一个直指向函数类型为int,参数是两个int的函数的指针
 
int fun(int x, int y,int (*p)(int ,int))
{
	int result;
	result = (*p)(x,y);   //（*p）(x,y)--->max(x,y) 
	printf("%d\n",result);
}

int max(int x ,int y)
{
	int z;
	if(x>y) z = x;
	else z = y;
	printf("max=");
	return z;
}

int min(int x ,int y)
{
	int z;
	if(x<y) z = x;
	else z = y;
	printf("min=");
	return z;
}

int add(int x , int y)
{
	int z;
	z = x + y;
	printf("add=");
	return z;
}
