#include <stdio.h>
#include <string.h>
 
int main(int argc , char const* argv[])
{
	char a[100]={};
	int t = 0;
	int n = 1;
do	
{
	char c = '.';
	scanf("%s",a);
	t = (int)strlen(a); // 
	if(a[t-1]==c){  //这是验证句号的 
	if(t>1) { 
		printf("%d",t-1);
	} 
		n = 0;
	}else printf("%d ",t);

}while(n);	
	
	return 0; 
}
