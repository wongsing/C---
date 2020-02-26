#include <stdio.h>
#include <string.h>
//输入3个字符串，按照大小输出 
int main()
{
	//定义s[4][80]多一个一维数组是用来保存替换值的 
	char s[4][80],(*p)[80];
	int i;
	for(p=s,i=0;i<3;i++) scanf("%s",(*(p+i)));//*(p+i)-->a[i] 一维数组 
	if(strcmp(*p,*(p+1))>0){ 
	//如果第一个字符串大于第二个，替换 
		strcpy(s[3],*p),strcpy(*p,*(p+1)),strcpy(*(p+1),s[3]);
	}
	if(strcmp(*p,*(p+2))>0){
		strcpy(s[3],*p),strcpy(*p,*(p+2)),strcpy(*(p+2),s[3]);
	}
	if(strcmp(*(p+1),*(p+2))>0){
		strcpy(s[3],*(p+1)),strcpy(*(p+1),*(p+2)),strcpy(*(p+2),s[3]);
	}	
	printf("%s %s %s\n",p,p+1,p+2);
	return 0;
}

