   #include <stdio.h>
   //����һ��ʮ�������������һ��ʮ������ 
   void main()
   {
        char a[6];
        scanf("%s",a);
        printf("%d\n",htoi(a));
    }
    int htoi(char s[])
{
    int i,n;
        n=0;
        for(i=0;s[i]!='\0';i++)
        {
           if(s[i]>='0' && s[i]<='9')
               n=n*16+s[i]-'0';
           if(s[i]>='a' && s[i]<='f')
               n=n*16+s[i]-'a'+10;
           if(s[i]>='A' && s[i]<='F')
               n=n*16+s[i]-'A'+10;
        }
        return(n);
    }
