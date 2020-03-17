#include <stdio.h>
#include <stdlib.h>
int main()
{
	char checksum = -1;
	char s;
	while((s=getchar())!=EOF){
		putchar(s);
		checksum+=s;
	}
	printf("%d\n",checksum);
	return EXIT_SUCCESS;
}
