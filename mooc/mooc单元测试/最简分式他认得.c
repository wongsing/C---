
#include<stdio.h>
 
int main()
{
	int m,n,mt,nt;
	scanf("%d/%d",&m,&n);
	mt = m;
	nt = n;
	if( m > n){
		int t = m;
		m = n;
		n = t;
	}
	int r = n%m;
	while( r ){  //Õ·×ªÏà³ı·¨ 
		n = m;
		m = r;
		r = n%m;
	} 
	mt = mt/m;
	nt = nt/m;
	printf("%d/%d\n",mt,nt);
	
	return 0;
}

