#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	volatile int a=24;/*����һ������Ҫ��ȡ�ı���,volatile ���Ը���gcc��Ҫ�Ż����д��룬���Ա�����Ч*/
    volatile int b[2]={1,2};/*����һ�����飬��������ǹؼ�����ʱb��Ϊ����ָ�룬ָ���һ��Ԫ�أ���
1�ڶ�ջ�еĴ���λ�ã�������ǾͿ�������b����ȡ��ջ������λ�ã��ó�����ӵ�еĶ�ջ��*/
    volatile int c=b[2];
    printf("%d\n",c);//��ӡ��ָ��λ�ö�ջ��ֵ
return 0;


}
