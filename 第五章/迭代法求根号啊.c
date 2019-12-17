#include <stdio.h>
#include <math.h>

int main()

{float x0,x1,a;  
scanf("%f",&a);  
x1=a/2;  
do  
{x0=x1;x1=(x0+a/x0)/2;}  
while(fabs(x0-x1)>=0.00001);  
printf("%.3f\n",x1);  
}  
