#include <stdio.h>
#include <stdlib.h>
#define WIDTH 8
#define HEIGHT 8

/**
*		������ 
*	0	��ʾ��
*	1	��ʾǽ
*	2	��ʾ��
*	3	��ʾ����
*	4	��ʾ��
*	5	��ʾ�Ƶ�Ŀ�ĵص����� 
*/

int map[HEIGHT][WIDTH] = {
	{0 , 0 , 1 , 1 , 1 , 0 , 0 , 0},
	{0 , 0 , 1 , 4 , 1 , 0 , 0 , 0},
	{0 , 0 , 1 , 0 , 1 , 1 , 1 , 1},
	{1 , 1 , 1 , 3 , 0 , 3 , 4 , 1},
	{1 , 4 , 0 , 3 , 2 , 1 , 1 , 1},
	{1 , 1 , 1 , 1 , 3 , 1 , 0 , 0},
	{0 , 0 , 0 , 1 , 4 , 1 , 0 , 0},
	{0 , 0 , 0 , 1 , 1 , 1 , 0 , 0},
};

//�˵�λ�� 
int x , y ;

//���ӵĸ��� 
int boxs;

//�������� 
void initdata();    //��ʼ������ 
void drawmap();		//���Ƶ�ͼ���� 
void moveup();		//�����ƶ����� 
void moveleft();	//�����ƶ����� 
void movedown();	//�����ƶ����� 
void moveright();	//�����ƶ����� 


//direction--> �û�������ƶ�ָ�� 
int main(int argc , char *argv[]){
	char direction;   
	initdata();
	while(1){
		system("cls");  		//�����Ļ 
		drawmap();
		//
		if(!boxs) break;		//�������Ϊ0�������
				
		direction = getch();	
		switch(direction){
			case 'w':
				moveup();
				break;
			case 'a':
				moveleft();
				break;
			case 's':
				movedown();
				break;
			case 'd':
				moveright();
				break;
		}
	}
	printf("��ϲ�������Ϸ��");
	return 0;
}

//��Ϸ��ʼ�� 
void initdata()
{
	int i , j;
	printf("��Ϸ�����У����Ժ�....");
	
	for( i = 0;i<HEIGHT;i++){
		for(j = 0;j<WIDTH;j++){
			//�ҵ��˵�λ�� 
			if(map[i][j] == 2){
				x = j;
				y = i;
			}
			//�����ӵĸ��� 
			if(map[i][j] == 3)
				boxs++;
		}
	} 
}

//���Ƶ�ͼ���� 
void drawmap(){
	int i , j;
	for(i = 0 ; i< WIDTH ; i++){
		for(j = 0 ; j < HEIGHT;j++){
			switch(map[i][j]){
				case 0:
					printf("  ");
					break;
				case 1:
					printf("��");
					break;
				case 2:
					printf("��");
					break;
				case 3:
					printf("��");
					break;
				case 4:
				 	printf("��");
				 	break;
				case 5:
					printf("��");
					break;
			}
		}
		printf("\n");
	}
}

//�����ƶ����� 
void moveup()
{
	int ux , uy;	//���������Ϸ���λ�� 
	
	if(y == 0){		//����Ϸ�û��Ԫ�أ�ֱ��return 
		return;	
	} 
				
	ux = x;			//��¼�Ϸ�����	
	uy = y - 1;
	
	if(map[uy][ux] == 5)	//�Ϸ��ѳɷ��� 
		return ;
	
	if(map[uy][ux] == 1)	//�Ϸ���ǽ 
		return ;	
		
	if(map[uy][ux] == 3){	//�Ϸ������� 
							//�����Ϸ���ǽ 
	if(map[uy-1][ux] == 1){	
		return;	
	} 
							//�����Ϸ����򣬸�ֵ5�����ɷ���5�����Ӵ����,���Ӽ���һ�� 
	if(map[uy-1][ux] == 4){	
		map[uy-1][ux] = 5;
		map[uy][ux] = 0;
		boxs--;
	}else{
		map[uy-1][ux] = 3;	//�ƶ����� 
	}				
}	

	map[y][x] = 0;			
	map[uy][ux] = 2;
	y = uy;
}

//�����ƶ� 
void moveleft()
{
	int lx , ly;		//����������λ�� 
	if( x== 0 ) 		//������ûԪ�ؾ�return 
		return ;
	
	lx = x - 1;			//��¼������ 
	ly = y;
	 
	if(map[ly][lx] == 5)	//����������ɷ��� 
		return ;
		
	if(map[ly][lx] == 1)	//��������ǽ 
		return ;
		
	if(map[ly][lx] == 3)	//������������ 
	{
		if(map[ly][lx-1] == 1)		//������������ǽ 
			return;
		
		if(map[ly][lx-1]== 4 )		//�������������� 
		{							//��ֵ5�����ɷ���,���Ӵ���հ�,��������һ 
			map[ly][lx-1] = 5;
			map[ly][lx] = 0;
			boxs--;
		}else{
			map[ly][lx-1]=3;		//�ƶ����� 
		}
	}
	map[y][x] = 0;
	map[ly][lx] = 2;
	x = lx;
}

//�����ƶ� 
void movedown()
{
	int dx ,dy;				//��¼�����·����� 
	if(y== HEIGHT - 1)		//����·���Ԫ�� 
		return ;
	
	dx = x;					//�����·����� 
	dy = y + 1;		
	
	if(map[dy][dx] == 5)	//����·��ѳɷ��� 
		return;
		
	if(map[dy][dx] == 1)	//����·���ǽ 
		return;
		
	if(map[dy][dx] == 3)	//����·������� 
	{
		if(map[dy + 1][dx] == 1)	//�����·���ǽ 
			return ;
			
		if(map[dy+1][dx] == 4){		//�����·�����,��ֵ5�����ɷ���,��������һ 
			map[dy+1][dx] = 5;
			map[dy][dx] = 0;
			boxs--; 
		}else{
			map[dy+1][dx] = 3;		//�ƶ����� 
		}
	}
		map[y][x] = 0;
		map[dy][dx] = 2;
		y = dy;
}

//�����ƶ� 
void moveright()
{
	int rx , ry;			//���������ҷ����� 
	if(x == WIDTH - 1)		//����ұ���Ԫ�� 
		return ;
		
	rx = x + 1;				//�����ұ����� 
	ry = y;
	
	if(map[ry][rx] == 5)	//����ұ��ѳɷ��� 
		return ;
		
	if(map[ry][rx] == 1)	//����ұ���ǽ 
		return ;
			
	if(map[ry][rx] == 3){			//����ұ������� 
		if(map[ry][rx+1] == 1)		//��������ұ���ǽ 
			return ;
		
		if(map[ry][rx+1] == 4)		//��������ұ����򣬸�ֵ5����������������1 
		{
			map[ry][rx+1] = 5;
			map[ry][rx] = 0;
			boxs--;
		}else{
			map[ry][rx+1] = 3;		//�ƶ����� 
		}
	}
		map[y][x] = 0;
		map[ry][rx]=2;
		x = rx;
}
