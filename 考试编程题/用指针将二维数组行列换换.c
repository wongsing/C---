 #include <stdio.h>
 //��ָ��ķ�����һ��3X3���Ͷ�ά����������л��� 
   void main()
   {
       void move(int *pointer);
       int a[3][3],*p,i;
       printf("input matrix:\n");
       for(i=0;i<3;i++)
       scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
       p=&a[0][0];   // p��0��0�еĵ�ַ 
	   //---->��ͬ�� p = a;����pָ��һά����a[0]
	   //*(p+1)+0--->1��0�еĵ�ַ
	   //*(*(p+1)+0)--->1��0�е�ֵ 
       move(p);
       printf("Now,matrix:\n");
       for (i=0;i<3;i++)
           printf("%d %d %d\n",a[i][0],a[i][1],a[i][2]);
   }
   void move(int *pointer)
   {
      int i,j,t;
      for(i=0;i<3;i++)
         for(j=i;j<3;j++)
         { 
         //�Ǹ��ݶ�ά�������ڴ���Ҳ�������洢�� 
         	t=*(pointer+3*i+j); //�洢�е�ֵ 
         	*(pointer+3*i+j)=*(pointer+3*j+i); //���е�ֵ������
         	*(pointer+3*j+i)=t;//���е�ֵ������ 
         }
}
