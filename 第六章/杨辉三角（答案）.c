#include <stdio.h>
int main()
{ static int m,n,k,b[15][15];  
b[0][1]=1;  
for(m=1;m<15;m++)  
{for(n=1;n<=m;n++)  
{ b[m][n]=b[m-1][n-1]+b[m-1][n];  
printf("%-5d",b[m][n]);}printf("\n");  
}  
}  
