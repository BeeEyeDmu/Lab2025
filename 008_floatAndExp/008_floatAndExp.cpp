// %f와 %e로 출력하기
#include <stdio.h>

int main()
{
	float f = 0.123456789;
	double d = 0.123456789;

	printf("%f\n", f);
	printf("%e\n", f);

	printf("%f\n", d);
	printf("%e\n", d);

	float x = 2e10; // 지수형 숫자 2 x 10의 10승
	printf("%f\n", x);

	int y = 2e10;
	printf("%d\n", y);

	long long z = 2e10;
	printf("%lld\n", z);
}