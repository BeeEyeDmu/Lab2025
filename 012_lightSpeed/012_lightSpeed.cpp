// 태양에서 지구까지 빛의 속도로 오늘 시간

#include <stdio.h>

int main()
{
		double d = 149600000;
		double s = 300000;
		double p = d / s;

		int m= (int)(p / 60);
		double se = p - m * 60;
		printf("%d분 %.2f초\n", m, se);
		return 0;

	

	//int lightSpeed = 300000;	// km
	//int distance = 149600000;	// km

	//int sec = distance / lightSpeed;
	//int min = sec / 60;
	//sec = sec - min * 60;

	//printf("%d분 %d초\n", min, sec);
}