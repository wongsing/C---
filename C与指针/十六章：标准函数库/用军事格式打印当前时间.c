#include <stdio.h>
#include <time.h>
//�·��Ǵ�0-11�����1900��Ҫ����1900 
int main()
{
	struct tm *tm;
	time_t  now;
	now =  time(NULL);
	tm = localtime(&now);
	printf("%d:%02d:%02d %d/%02d/%d\n",
	tm->tm_hour,tm->tm_min,tm->tm_sec,
	tm->tm_mon+1,tm->tm_mday,tm->tm_year+1900);

}
