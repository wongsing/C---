#include <stdio.h>
//输入正整数m和n，若m+n为质数（素数），则输出"Yes"反之则输出"No" 

int myfun(int x);
int main()
{
	int m , n;
	scanf("%d %d",&m,&n);
	if(myfun(m+n)) printf("Yes\n");
	else printf("No\n"); 
	
}

int myfun(int x)
{
	int k ;
	for(k=2;k<x;k++){
		if(x%k==0) return 0;
	}
	return 1;
}

