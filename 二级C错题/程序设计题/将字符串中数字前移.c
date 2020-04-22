#include  <stdio.h>
#include  <string.h>
#include  <stdlib.h>
#include  <ctype.h>
char *fun(char  *s)
{ int  i, j, k, n;    char  *p, *t;
  n=strlen(s)+1;
  t=(char*)malloc(n*sizeof(char));
  p=(char*)malloc(n*sizeof(char));
  j=0; k=0;
  for(i=0; i<n; i++)
  {  if(isdigit(s[i])) {
/**********found**********/
       p[j]=s[i]; j++;}
     else
     {  t[k]=s[i]; k++; }
   }
/**********found**********/
   for(i=0; i<k; i++) p[j+i]= t[i];
   p[j+k]=0;
/**********found**********/
   return p;
}
main()
{ char  s[80];
  printf("Please input: ");  scanf("%s",s);
  printf("\nThe result is: %s\n",fun(s));
}

