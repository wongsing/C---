#include  <stdlib.h>
#include  <stdio.h>
#define   N   10
//�ҳ�N�������е�ƽ��ֵav��һ����ƽ��ֵС���ҽӽ���ֵm 
//����fun�����Ƿ����βε�ƽ��ֵ���ͷ���ֵΪm 
double fun(double  x[],double  *av)
{ int  i,j;    double  d,s;
  s=0;
  for(i=0; i<N; i++)  s = s +x[i];
/**********found**********/
  *av=s/N;  //�ҳ�ƽ��ֵ 
  d=32767; //dֻҪ��49�󼴿� 
  for(i=0; i<N; i++)
    if(x[i]<*av && *av - x[i]<=d){
/**********found**********/
      d=*av-x[i]; 
	  j=i;  
	 }
/**********found**********/
  return x[j];
  //������ƽ��ֵ��ӽ�������С��ƽ��ֵ��Ԫ��  
}
main()
{ int  i;    double  x[N],av,m;
//rand()��һ��ȡ������ֵ������x[i]==rand()%50--->�õ���ֵ����0~49 
  for(i=0; i<N; i++){ x[i]=rand()%50; printf("%4.0f ",x[i]);}
  printf("\n");
  m=fun(x,&av);
  printf("\nThe average is: %f\n",av);
  printf("m=%5.1f ",m);
  printf("\n");
}

