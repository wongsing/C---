 #include <stdio.h>
 //用指针的方法将一个3X3整型二维数组进行行列互换 
   void main()
   {
       void move(int *pointer);
       int a[3][3],*p,i;
       printf("input matrix:\n");
       for(i=0;i<3;i++)
       scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
       p=&a[0][0];   // p是0行0列的地址 
	   //---->不同于 p = a;该是p指向一维数组a[0]
	   //*(p+1)+0--->1行0列的地址
	   //*(*(p+1)+0)--->1行0列的值 
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
         //是根据二维数组在内存中也是连续存储的 
         	t=*(pointer+3*i+j); //存储列的值 
         	*(pointer+3*i+j)=*(pointer+3*j+i); //将行的值赋给列
         	*(pointer+3*j+i)=t;//将列的值赋给行 
         }
}
