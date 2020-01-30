   #include <stdio.h>
   f(int a)
   {
       int b=0;
       static int c=3;
       b++; 
       c++;
       return(a+b+c);  //易错点在此--->b、c的值运行完自增+1!!! 
   }
   void main()
   {
       int a=2, i;
       for(i=0;i<3;i++) 
          printf("%d\n",f(a));
   }
