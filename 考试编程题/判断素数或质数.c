#include <stdio.h>
//����������m��n����m+nΪ�������������������"Yes"��֮�����"No" 

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

