#include <stdio.h>
#include <stdlib.h>
//�򿪺͹ر��ļ� 
int main(int ac , char **av)
{
	int	exit_status = EXIT_SUCCESS;
	FILE	*input;   //��������fopen�ķ���ֵ 
	
	while(*++av != NULL){ //���� 
		input = fopen(*av,"r"); //�ڶ���������mode��״̬,r�Ƕ�ȡ,wд,a��� 
							//�ɹ���᷵��һ��ָ�� FILE �ṹ��ָ��  
		if(input == NULL){  //input����ʧ�ܷ���NULLָ�룬�Ӷ�����perror������ӡ������Ϣ 
			perror( *av );
			exit_status = EXIT_FAILURE;
			continue;
		}
		//�ر��� 
	//���б�Ҫ��input���м�飬��Ȼfclose�Ѿ��ǽ����ˣ�����Ҳ�п��ܷ������� 
		if(fclose(input) != 0){ //fcloseִ�гɹ�����0�����򷵻�EOF 
			perror( "fclose");
			exit(EXIT_FAILURE);
		}	
	}
		return exit_status;
}
