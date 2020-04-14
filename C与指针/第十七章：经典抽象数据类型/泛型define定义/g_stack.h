#include <assert.h>
//����ע�ͺ���� \ ,�Һ��治���пո�
//#a ����� a ,�Ѳ�������ַ��� 
//a##1 = 2 ����� a1=2 ,�൱�����ӷ� 
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
