//�����¼������

//�������ר����Ϣ�Ľṹ 
typedef struct {
	int		cost;
	int 	supplier;
}Partinfo;

//�洢װ���ר����Ϣ�Ľṹ
typedef struct {
		int 	n_parts;
struct	SUBASSYPART {
	char partno[10];
	short		quan;
}*part;
} Subassyinfo;

//�����¼�ṹ������һ�������¼ 
typedef struct{
	char partno[10];
	int quan;
	enum { PART , SUBASSY}  type;
	union {
		Partinfo *part;
		Subassyinfo *subassy;
	}info;
} Invrec; 
