//�ͷŴ����¼�ĺ���

#include <stdlib.h>
#include "inventor.h"

void
discard_inventory_record (Invrec *record)
{
	//ɾ����¼�еı��岿��
	switch(record->type){
		case SUBASSY:
			free(record->info.subassy->part);
			free(record->info.subassy);
			break;
		
		case PART:
			free(record->info.part);
			break;
	} 
	//ɾ����¼�����岿��
	free(record); 
} 
