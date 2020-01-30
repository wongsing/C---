 #include <stdio.h>
 //易错点:函数定义的参数表和调用函数的参数表易混淆
 //以函数定义的参数表为准，参数的名称与调用的参数表名称无关！！ 
    void fun(int *x, int *y)
    {
        printf("%d %d", *x, *y);
        *x=3;
        *y=4;
    }
    void main()
    {
        int x=1,y=2;
        fun(&y,&x);
        printf("%d %d",x, y);
}
