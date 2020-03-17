#include <stdio.h>
//汉诺塔问题 --->要把n-1当做一个整体，借助其他柱子移动
 //采用递归-->关系到堆栈 
int main()
{
	void hanoi(int n,char a,char b,char c);
	int m;
	printf("input the number of diskes:");
	scanf("%d",&m);
	printf("The step to move %d diskes:\n",m);
	hanoi(m,'A','B','C');
	return 0;
}
//n个盘子从A座借助B座移至C座
//分两步走 
void hanoi(int n,char a,char b,char c)
{
	void move(char x,char y);
	if(n==1)      //递归退出条件 
		move(a,c); 
	else
		{
		hanoi(n-1,a,c,b);   //首先借助C座从A移到B座 
		 
		move(a,c);			//将A座最后一个直接移到C座 
		hanoi(n-1,b,a,c);   //借助A座从B座移到C座 
		}
}

void move(char x,char y)
{
	printf("%c-->%c\n",x,y);
}
