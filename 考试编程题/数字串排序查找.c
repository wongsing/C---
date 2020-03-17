#include "stdio.h"
#include "stdlib.h"
int ato(char argv);
void shellsort(int a[],int n) ;
int BinarySearch(int a[],int x,int n);

/* atoi是将数字串转换为对应整数的函数 */
int ato(char *s)
{
	int j=0,num=0;
	for(;*(s+j)!='\0';j++)
		num=num*10+s[j]-'0';
	return num;
}

/* shellsort是shell法排序函数 */
void shellsort(int a[],int n)   
{
	  int gap,i,j,t;
	  for(gap=n/2;gap>0;gap/=2)
		  for(i=gap;i<n;i++)       
			  for(j=i-gap;j>=0&&a[j]>a[j+gap];j-=gap){
				  t=a[j];
a[j]=a[j+gap];
a[j+gap]=t;
}
}

/* BinarySearch是二分查找函数 */
int BinarySearch(int a[],int x,int n)
{
	int front=0,back=n-1,middle;
	while(front<=back) {
		middle=(front+back)/2;   
		if(x<a[middle])
			back=middle-1; 
		else if(x>a[middle])
			front=middle+1; 
		else
			return (middle); 
	}
	return -1;   
}

/* 下面是带命令行参数的main函数 */
int main()
{
	 char *argv = "6  12  38 102   5  71  36   8  85";
	int n=10,argc=10,i,*a,x=8,find;
	if(argc<10)
	{
		printf("too few arguments!\n");
		return -1;
	}
	a=(int *)malloc((n-1)*sizeof(int));
	for(i=1;i<n;i++)
		a[i-1]=ato(argv[i]);
	for(i=0;i<n-1;i++)
		printf("%4d",a[i]);
	printf("\n");
	shellsort(a,n-1);
	for(i=0;i<n-1;i++)
		printf("%4d",a[i]);
	printf("\n");
	find=BinarySearch(a,x,n-1);
	printf("find=%4d",find);
	printf("\n");
	return 0;
}
