#include <stdio.h>
void copy_n(char dst[] , char src[] , int n);
//��src���Ƶ�dst����src�ַ�������С��n��
//���ڸ��ƺ���ַ���β�������㹻��NULL�ַ�,ʹ�ó��ȵ���n 
int main()
{
	char a[] = "aacabc";
	char b[]= "bb";
	copy_n(a,b,1);
	printf("%s\n",a);
	printf("%s\n",b);
	return 0;
}

void copy_n(char dst[] , char src[] , int n){
	
	int dst_index,src_index;
	
	src_index = 0;
	
	for(dst_index = 0;dst_index <n;dst_index += 1){
		dst[dst_index] = src[src_index];
		if(src[src_index] != 0)
			src_index += 1;                    
	}
}
