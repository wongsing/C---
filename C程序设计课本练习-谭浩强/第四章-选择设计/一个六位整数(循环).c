#include <stdio.h>

int main (){
	int num,cnt;
	int i,j,t,k,m,n;
	printf("请输入一个不多于五位数的整数:"); 
	scanf("%d",&num);
	while(num>=(1e+05)){
		printf("输入有误，请重新输入");
		scanf("%d",&num);
	}
	i=num;
//输出位数 
	for(cnt=0;i>0;cnt++){
		i/=10;
	}
	printf("该整数是%d位数。\n",cnt);
//逆序输出 
	j=num;
	while(j>0){
		t=j%10;
		j/=10;
		printf("%d ",t);
	}
	printf("\n");
	for(n=1;cnt>0;cnt--){
		n*=10;
	}
//	printf("n=%d\n",n);
//顺序输出 
	k=num;
	n/=10;
	while(n>0){
		m=k/n;
		k%=n;
		printf("%d ",m);
		n/=10;
	}
	
	return 0;
}
