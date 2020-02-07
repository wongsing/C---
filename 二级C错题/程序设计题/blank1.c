#include  <stdlib.h>
#include  <stdio.h>
#define   N   10
//找出N个整数中的平均值av和一个比平均值小并且接近的值m 
//函数fun作用是返回形参的平均值，和返回值为m 
double fun(double  x[],double  *av)
{ int  i,j;    double  d,s;
  s=0;
  for(i=0; i<N; i++)  s = s +x[i];
/**********found**********/
  *av=s/N;  //找出平均值 
  d=32767; //d只要比49大即可 
  for(i=0; i<N; i++)
    if(x[i]<*av && *av - x[i]<=d){
/**********found**********/
      d=*av-x[i]; 
	  j=i;  
	 }
/**********found**********/
  return x[j];
  //返回与平均值最接近，并且小于平均值的元素  
}
main()
{ int  i;    double  x[N],av,m;
//rand()是一个取任意数值函数，x[i]==rand()%50--->得到的值就是0~49 
  for(i=0; i<N; i++){ x[i]=rand()%50; printf("%4.0f ",x[i]);}
  printf("\n");
  m=fun(x,&av);
  printf("\nThe average is: %f\n",av);
  printf("m=%5.1f ",m);
  printf("\n");
}

