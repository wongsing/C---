#include <stdio.h>
void copy_n(char dst[] , char src[] , int n);
//把src复制到dst，若src字符串长度小于n，
//则在复制后的字符串尾部补充足够的NULL字符,使得长度等于n 
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
