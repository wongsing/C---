#include <stdio.h>
#define N 80
//检查是否为回文,需要两个下标，正向和反向
//第一个字符等于倒数第一个，依次类推，当正向大于反向证明结束,也可说是对比一半 
int fun(char *str)
{
	int i,n=0,ret = 1 ;
	char *p = str;
	while(*p){   //计算字符数、下标 
		n++;
		p++;
	} 
	for(i=0;i < n/2 ;i++){
		if(str[i] != str[n-i-1])
		 {
			ret = 0 ;			
			break;			
		}
	}
	return ret;
}
//这一种是先找出下标,与上述方法类似 
int fun1(char *str){
	int i , j = 0, ret = 1;
	while(str[j]) j++;
	j--;
	for(i=0;i<j;i++,j--){
		if(str[i] != str[j]){
			ret = 0;
			break;
		}
	}
	return ret;
}
main()
{
	 char s[N];
	 FILE *out;
         char *test[]={"1234321","123421","123321","abcdCBA"};
	 int i;
	 printf("Enter a string : ");
	 gets(s);
	 printf("\n\n");
	 puts(s);
	 if(fun1(s))
		printf("YES\n");
	 else
		printf("NO\n"); 
	 /************************************/
	 out=fopen("out.dat","w");
	 for(i=0;i<4;i++)
	 	if(fun(test[i]))
			fprintf(out,"YES\n");
		else
			fprintf(out,"NO\n");
	 fclose(out);
	 /************************************/
}
