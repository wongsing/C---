#include <stdio.h>
#include <string.h>
//�������±�Ϊż���ģ�asc��ֵΪ������ɾ�������ֵ���µ��ַ���
//��ס�ˣ���Ҫ��ֵ0��Ϊ��β 
void fun(char  *s, char  t[])
{
	int i , j = 0 ;
	for(i = 0 ; i<strlen(s);i++){
		if(!((i % 2 == 0 ) && (s[i] % 2 != 0 )))
		{
			t[j] = s[i];
			j++;
		}
	}
			t[j] = 0;
}

main()
{
  char   s[100], t[100];void NONO ();
  printf("\nPlease enter string S:"); scanf("%s", s);
  fun(s, t);
  printf("\nThe result is: %s\n", t);
  NONO(); 
}

void NONO ()
{/* ���������ڴ��ļ����������ݣ����ú�����������ݣ��ر��ļ��� */
  char s[100], t[100] ;
  FILE *rf, *wf ;
  int i ;

  rf = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 10 ; i++) {
    fscanf(rf, "%s", s) ;
    fun(s, t) ;
    fprintf(wf, "%s\n", t) ;
  }
  fclose(rf) ;
  fclose(wf) ;
}

