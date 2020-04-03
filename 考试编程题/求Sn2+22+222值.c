#include <stdio.h>
//Sn=2+22+222+2222 求类似的值 a为数值2，n为位数4 
int main()
{
	int a , n , j,i = 0 , sum = 0, t = 0 , b[100];
	scanf("%d %d",&a,&n);
	while(i<n){
		t += a;
		b[i] = t;
		sum += t;
		t *= 10;
		i++;
	}
		b[i] = sum;
	for(j=0;j<=i;j++){
		if(j==i-1) printf("%d=",b[j]);
		else if(j==i) printf("%d",b[j]);
		else printf("%d+",b[j]);
	}	
	return 0;
}
