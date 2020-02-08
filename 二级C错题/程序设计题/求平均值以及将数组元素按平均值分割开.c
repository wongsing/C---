#include  <stdlib.h>
#include  <stdio.h>
#define   N   10
//求平均值，以及调整数组元素位置，比平均值大的在平均值前面，小的在平均值后面 
double fun(double  *x)
{ int  i, j;    double  s, av, y[N];
  s=0;
  for(i=0; i<N; i++)  s=s+x[i];
/**********found**********/
  av=s/N;  //平均值 
  for(i=j=0; i<N; i++)
    if( x[i]>av ){
/**********found**********/
      y[j++]=x[i]; //先找出大于平均值的，因为此循环只是i的，所以需要y[j++] 
	  x[i]=-1;} //比平均值小的元素标志 
  for(i=0; i<N; i++)
/**********found**********/
    if( x[i]!= -1) y[j++]=x[i]; //比平均值小的元素赋值给y数组 
  for(i=0; i<N; i++)x[i] = y[i];  //最后遍历回给x[] 
  return  av;
}
main()
{ int  i;     double  x[N];
  for(i=0; i<N; i++){ x[i]=rand()%50; printf("%4.0f ",x[i]);}
  printf("\n");
  printf("\nThe average is: %f\n",fun(x));
  printf("\nThe result :\n",fun(x));
  for(i=0; i<N; i++)  printf("%5.0f ",x[i]);
  printf("\n");
}

