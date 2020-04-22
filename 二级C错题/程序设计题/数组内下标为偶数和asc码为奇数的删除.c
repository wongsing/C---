#include <stdio.h>
#include <string.h>
//数组内下标为偶数的，asc码值为奇数的删除，最后赋值给新的字符串
//记住了！！要赋值0作为结尾 
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
{/* 本函数用于打开文件，输入数据，调用函数，输出数据，关闭文件。 */
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

