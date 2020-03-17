#include <stdio.h>
#include <string.h>
//#include <stdlib.h>
 
//if is $GPRMC command, return 1
int isGPRMC(char *gps, char *command);
// if is END, return 1
int isEND(char *gps, char *end);
 
int main(){
    char gps[1000];    
    char command[] = "$GPRMC";
    char end[] = "END";
     
    int i;
    int isEnd = 1;
    int time[3] = {0};
    int checksum = 0, checkgps = 0;
     
    do{
            //读入指令字符串
        scanf("%s", gps);
        //如果是GPRMC，则进入下一步判定
        if(isGPRMC(gps, command)){
            //compute check sum 异或计算校验码
            for(i=1; gps[i]!='*' && gps[i] != '\0' ; i++){
                checksum = checksum^gps[i];
            }
             
            //convert check 指令中的校验码十六进制转十进制
            char ch1 = gps[i+1], ch2 = gps[i+2];
            if(ch1>='A' && ch1<='F'){
                checkgps = (ch1-'A'+10)*16;
            }
            else{
                checkgps = (ch1-'0')*16;
            }
            if(ch2>='A' && ch2<='F'){
                checkgps += (ch2-'A'+10);
            }
            else{
                checkgps += (ch2-'0');
            }
         
            // compare checksum 对比校验码是否正确，正确则进入下一步
            if(checksum == checkgps){
                 
                //find locating information寻找定位信息，字段2即第二个逗号','后面一个字符
                i=7;
                while(gps[i]!=','){
                    i++;
                }
                 
                // if location successful, save time，如果定位成功，保存时间信息
                if(gps[i+1]=='A'){
                    time[0] = (gps[7]-'0')*10 + (gps[8]-'0');
                    time[0] = (time[0]+8) %24;
                    time[1] = 10*(gps[9] - '0') + (gps[10] - '0');
                    time[2] = 10*(gps[11]- '0') + (gps[12] - '0');
                }
            }
        }
        //如果输入是END，保存记号，退出循环
        if(isEND(gps, end)){
            isEnd = 0;
        }
    }while(isEnd);
     
    //output time 结束后打印时间
    printf("%02d:%02d:%02d\n", time[0], time[1], time[2]);
    return 0;
}
 
int isGPRMC(char *gps, char *command){
	int i;
    for(i=0; i<6; i++){
        if(gps[i]!=command[i]){
            return 0;
        }
    }
    return 1;
}
 
int isEND(char *gps, char *end){
	int i ;
    for(i=0; i<4; i++){
        if(gps[i]!=end[i]){
            return 0;
        }
    }
    return 1;
}

