#include <stdio.h>
#include <conio.h>
//��ĳ��ת������һ���ƣ���ĳ��Ϊm,����Ϊk;
//�����Ƚ���m%k���õ�������Ȼ���ٽ���m/k���ظ��������裬ֱ��m=0��
//���ѵõ�������������� 
/*************found**************/
void fun(int m,int k)
{ int aa[20], i;
  for(i=0;m;i++)
  {
	/*************found**************/
	aa[i]=m%k;
	m/=k;
  }
  for(;i;i--) //for(i=i-1;i;i--) printf("%d",aa[i]);
//i�����һλ���ǲ�ȷ����ֵ������Ҫ���i-1 
	/*************found**************/
	printf("%d",aa[i-1]);
}
main()
{
  int b,n;
  printf("\nPlease enter a number and a base:\n");
  scanf("%d%d",&n,&b);
  fun(n,b);
  printf("\n ");
}
