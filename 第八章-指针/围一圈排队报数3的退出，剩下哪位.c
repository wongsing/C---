#include <stdio.h>
#define N 10
//n个数围一圈顺序排号，叫号(1~3)，数到3的退出，最后剩下原来第几号的那位 
int main()
{
//数组多一个元素是因为第一个赋值为0 
	int a[N+1],*p,i,k,j;
	for(i=0,p=a;p<=(a+N);i++,p++) *p=i; 
//判断条件是p不大于a[N]在地址范围内,从0开始赋值 
//从第二个元素 1 开始 ，	
	p=a+1;  
	k=N;
//k=1就是到数组的第一位 
	i=0;
	while(k!=1){
		if(p>(a+N)) //如果p超过了数组的地址，就从数组第一项重新开始 
			p=a+1;
		if(*p!=0) //开始报数 
			i++;
		if((i-3)==0){  //数到3的就让其值归0，不计入报数,重新开始报数 
			*p=0;
			 i=0;
			 k--;
		}
			p++; //最后指向下一位 
	}
	for(i=1;i<N;i++)
	if(a[i]!=0) printf("最后剩下是原来第%d号的那位",a[i]);
	return 0;
}
