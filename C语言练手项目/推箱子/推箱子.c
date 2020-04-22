#include <stdio.h>
#include <stdlib.h>
#define WIDTH 8
#define HEIGHT 8

/**
*		推箱子 
*	0	表示空
*	1	表示墙
*	2	表示人
*	3	表示箱子
*	4	表示球
*	5	表示推到目的地的箱子 
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

//人的位置 
int x , y ;

//箱子的个数 
int boxs;

//声明函数 
void initdata();    //初始化函数 
void drawmap();		//绘制地图函数 
void moveup();		//向上移动函数 
void moveleft();	//向左移动函数 
void movedown();	//向下移动函数 
void moveright();	//向右移动函数 


//direction--> 用户输入的移动指令 
int main(int argc , char *argv[]){
	char direction;   
	initdata();
	while(1){
		system("cls");  		//清空屏幕 
		drawmap();
		//
		if(!boxs) break;		//如果箱子为0，则结束
				
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
	printf("恭喜你完成游戏！");
	return 0;
}

//游戏初始化 
void initdata()
{
	int i , j;
	printf("游戏加载中，请稍后....");
	
	for( i = 0;i<HEIGHT;i++){
		for(j = 0;j<WIDTH;j++){
			//找到人的位置 
			if(map[i][j] == 2){
				x = j;
				y = i;
			}
			//数箱子的个数 
			if(map[i][j] == 3)
				boxs++;
		}
	} 
}

//绘制地图函数 
void drawmap(){
	int i , j;
	for(i = 0 ; i< WIDTH ; i++){
		for(j = 0 ; j < HEIGHT;j++){
			switch(map[i][j]){
				case 0:
					printf("  ");
					break;
				case 1:
					printf("■");
					break;
				case 2:
					printf("♀");
					break;
				case 3:
					printf("◆");
					break;
				case 4:
				 	printf("●");
				 	break;
				case 5:
					printf("★");
					break;
			}
		}
		printf("\n");
	}
}

//向上移动函数 
void moveup()
{
	int ux , uy;	//定义人物上方的位置 
	
	if(y == 0){		//如果上方没有元素，直接return 
		return;	
	} 
				
	ux = x;			//记录上方坐标	
	uy = y - 1;
	
	if(map[uy][ux] == 5)	//上方已成方块 
		return ;
	
	if(map[uy][ux] == 1)	//上方是墙 
		return ;	
		
	if(map[uy][ux] == 3){	//上方是箱子 
							//箱子上方是墙 
	if(map[uy-1][ux] == 1){	
		return;	
	} 
							//箱子上方是球，赋值5让其变成方块5，箱子处变空,箱子减少一个 
	if(map[uy-1][ux] == 4){	
		map[uy-1][ux] = 5;
		map[uy][ux] = 0;
		boxs--;
	}else{
		map[uy-1][ux] = 3;	//移动箱子 
	}				
}	

	map[y][x] = 0;			
	map[uy][ux] = 2;
	y = uy;
}

//向左移动 
void moveleft()
{
	int lx , ly;		//定义人物左方位置 
	if( x== 0 ) 		//如果左边没元素就return 
		return ;
	
	lx = x - 1;			//记录左方坐标 
	ly = y;
	 
	if(map[ly][lx] == 5)	//如果左边已完成方块 
		return ;
		
	if(map[ly][lx] == 1)	//如果左边是墙 
		return ;
		
	if(map[ly][lx] == 3)	//如果左边是箱子 
	{
		if(map[ly][lx-1] == 1)		//如果箱子左边是墙 
			return;
		
		if(map[ly][lx-1]== 4 )		//如果箱子左边是球 
		{							//赋值5将其变成方块,箱子处变空白,箱子数减一 
			map[ly][lx-1] = 5;
			map[ly][lx] = 0;
			boxs--;
		}else{
			map[ly][lx-1]=3;		//移动箱子 
		}
	}
	map[y][x] = 0;
	map[ly][lx] = 2;
	x = lx;
}

//向下移动 
void movedown()
{
	int dx ,dy;				//记录人物下方坐标 
	if(y== HEIGHT - 1)		//如果下方无元素 
		return ;
	
	dx = x;					//定义下方坐标 
	dy = y + 1;		
	
	if(map[dy][dx] == 5)	//如果下方已成方块 
		return;
		
	if(map[dy][dx] == 1)	//如果下方是墙 
		return;
		
	if(map[dy][dx] == 3)	//如果下方是箱子 
	{
		if(map[dy + 1][dx] == 1)	//箱子下方是墙 
			return ;
			
		if(map[dy+1][dx] == 4){		//箱子下方是球,赋值5让其变成方块,箱子数减一 
			map[dy+1][dx] = 5;
			map[dy][dx] = 0;
			boxs--; 
		}else{
			map[dy+1][dx] = 3;		//移动箱子 
		}
	}
		map[y][x] = 0;
		map[dy][dx] = 2;
		y = dy;
}

//向右移动 
void moveright()
{
	int rx , ry;			//定义人物右方坐标 
	if(x == WIDTH - 1)		//如果右边无元素 
		return ;
		
	rx = x + 1;				//定义右边坐标 
	ry = y;
	
	if(map[ry][rx] == 5)	//如果右边已成方块 
		return ;
		
	if(map[ry][rx] == 1)	//如果右边是墙 
		return ;
			
	if(map[ry][rx] == 3){			//如果右边是箱子 
		if(map[ry][rx+1] == 1)		//如果箱子右边是墙 
			return ;
		
		if(map[ry][rx+1] == 4)		//如果箱子右边是球，赋值5让其变成球，箱子数减1 
		{
			map[ry][rx+1] = 5;
			map[ry][rx] = 0;
			boxs--;
		}else{
			map[ry][rx+1] = 3;		//移动箱子 
		}
	}
		map[y][x] = 0;
		map[ry][rx]=2;
		x = rx;
}
