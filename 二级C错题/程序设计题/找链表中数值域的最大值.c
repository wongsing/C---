#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//�ҳ�����������������ֵ 
typedef struct aa
{ int data;
  struct aa *next;
} NODE;
fun (NODE *h)
{ int max=-1;
  NODE *p;
/*************found**************/
  p=h->next;
  while(p)
       { if(p->data>max)
             max=p->data;
/*************found**************/
          p=p->next;
       }
  return max;
}
outresult(int s, FILE *pf)
{ fprintf(pf, "\nThe max in link :%d\n",s);
}
NODE *creatlink(int n, int m)
{ NODE *h,*p,*s;
  int i;
  h=p=(NODE *)malloc(sizeof(NODE));
  h->data=9999;
  for(i=1;i<=n;i++)
    { s=(NODE *) malloc(sizeof(NODE));
      s->data=rand()%m; s->next=p->next;
      p->next=s;  p=p->next;
    }
  p->next=NULL;
  return h;
}
outlink(NODE *h,FILE *pf)
{ NODE  *p;
  p=h->next;
  fprintf(pf, "\n The LIST :\n\n HEAD");
  while(p)
    { fprintf(pf, "->%d",p->data); 
  p=p->next;}
  fprintf(pf, "\n");
}
main()
{ NODE *head; int m;
  system("CLS");
  head=creatlink(12,100);
  outlink(head,stdout);
  m=fun(head);
  printf("\nThe RESULT :\n"); 
  outresult(m,stdout);
}
