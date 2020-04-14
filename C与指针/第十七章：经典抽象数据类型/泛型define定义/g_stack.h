#include <assert.h>
//多行注释后面加 \ ,且后面不得有空格
//#a 编译成 a ,把参数变成字符串 
//a##1 = 2 编译成 a1=2 ,相当于连接符 
#define GENERIC_STACK(STACK_TYPE , SUFFIX , STACK_SIZE) 	\
		static	STACK_TYPE	stack##SUFFIX[STACK_SIZE];		\
		static	int			top_element##SUFFIX = -1; 		\
		                                                	\
		int is_empty##SUFFIX(void){							\
			return top_element##SUFFIX == -1  ;         	\
		}     	                                       		\
		                                                	\
		int is_full##SUFFIX(void)  {						\
			return top_element##SUFFIX == STACK_SIZE-1; 	\
		}                                               	\
		void push##SUFFIX(STACK_TYPE value){				\
			assert(!is_full##SUFFIX());						\
			top_element##SUFFIX += 1;						\
			stack##SUFFIX[ top_element##SUFFIX] = value;	\
	}														\
		void pop##SUFFIX(void)								\
		{													\
			assert(!is_empty##SUFFIX());					\
			top_element##SUFFIX -= 1;						\
		}													\
															\
		STACK_TYPE top##SUFFIX(void)						\
		{													\
			assert(!is_empty##SUFFIX());					\
			return stack##SUFFIX[top_element##SUFFIX];		\
		}
