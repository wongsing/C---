#include<stdio.h>
#include<string.h>
#define N 80
//比较两个字符串，不用strcpy--->遇到不同的或者'\0'结束 
int mystr(char *s1,char *s2);
int main()
{
	int i,j=0,k=0;
	char str1[N] ,str2[N];
	gets(str1);
	gets(str2);
	printf("%d\n",mystr(str1,str2));	
//	printf("%d\n",strcmp(str1,str2));
	for(i=0;((str1[i]!=0)||(str2[i]!=0));i++){ 
		if((str1[i]>str2[i]) || (str1[i]<str2[i])) 
		{
			k=str1[i]-str2[i];
			j=1; 
			break;
		}
	}//能够顺利走完循环不进行if，则是相同，j就是判断是否相同  
	if(j==0) printf("结果为：0\n");
	else printf("结果为：%d\n",k); 
	
	return 0;
}

int mystr(char *s1,char *s2)
{
	int i = 0,resu;
	while(s1[i]==s2[i]&&s1[i]!='\0')  i++; 
//当不相同或者'\0'结束时就退出循环，然后就比较不相同的字符 
    if(s1[i]=='\0'&&s2[i]=='\0')  resu=0;  
    else  resu=s1[i]-s2[i];  
	return resu;
}
