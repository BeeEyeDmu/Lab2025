#include <stdio.h>
#include <math.h>

int main()
{
	int principal;	// 원금
	int year;				// 연도
	double interest;  // 이율(%)
	double futureValue;	// 원리합계

	printf("원금 : ");
	scanf_s("%d", &principal);

	printf("연도 : ");
	scanf_s("%d", &year);

	printf("이율 : ");
	scanf_s("%lf", &interest);

	for (int i = 1; i <= year; i++) {
		futureValue = principal * pow(1 + interest / 100.0, i);
		printf("%2d년 %10.1f\n", i, futureValue);
	}

}