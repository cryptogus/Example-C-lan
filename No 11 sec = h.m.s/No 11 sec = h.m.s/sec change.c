#include <stdio.h>

void change_time(long total_sec, int* hour, int* min, int* sec)
{
	*hour = total_sec / (60 * 60);
	*min = (total_sec - (*hour * 60 * 60)) / 60;
	*sec = (total_sec - (*hour * 60 * 60) - (*min * 60));
}

int main()
{
	int hour = 0, min = 0, sec = 0;
	long total_sec;
	printf("변환하려는 초를 입력해주세요.");
	scanf_s("%d", &total_sec);
	change_time(total_sec, &hour, &min, &sec);

	printf("%ld초는 %d시간 %d분 %d초 입니다.\n", total_sec, hour, min, sec);
	return 0;
}