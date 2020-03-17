#include <stdio.h>
//分数等级
//考虑输入是有小数
//所以在switch条件需要强制类型转换
//最后输出字符 
int main(){
	float score;
	char grade;
	printf("请输入您的分数:");
	scanf("%f",&score);
	while(score<0||score>100){
		printf("输入有误，请继续输入:");
		scanf("%f",&score);
	}
	
	switch ((int)(score/10)){
		case 9: grade='A';break;
		case 8: grade='B';break;
		case 7: grade='C';break;
		case 6: grade='D';break;	
		default:grade='E';	
	}
	
	printf("成绩是%5.1f，相应的等级是%c。\n",score,grade);
	return 0;
}
