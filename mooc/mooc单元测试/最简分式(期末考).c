#include <stdio.h>
//最简分式
//辗转相除法求最大公约数 
int main(){
	int a , b;
	scanf("%d/%d",&a,&b);
	
	int m , n , t ;    
	m = a ;     //m 用来储存a
	n = b ;		//n 用来储存b 
	t = 0 ;		//a 除以 b 的余数 
	while(n!=0){       //当n=0时结束，m就为最大公约数 
		t = m % n ;    //a 除以 b 的余数 
		m = n ;        //让 a = b ； 
		n = t ;        //让 b = 余数t； 
	}
	a/=m;     //分子分母除以最大公约数 
	b/=m;
	printf("%d/%d",a,b);
	return 0 ;
}
