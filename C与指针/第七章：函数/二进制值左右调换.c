#include <stdio.h>
 unsigned int
 main()
 {
 	unsigned int answer = 0;
 	unsigned int i;
 	unsigned int value = 25;	
 	
 	for(i=1;i!=0;i<<=1){
 		answer <<= 1;
 		if( value & 1)
 			answer |= 1;
 			value >>= 1;
 	}
 	
 	printf("%d\n",answer);
 	return 0;
 }
