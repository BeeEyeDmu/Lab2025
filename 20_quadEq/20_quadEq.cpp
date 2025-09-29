#include <stdio.h>
#include <math.h>   // 수학함수 라이브러리

int main()
{
	double a, b, c;

	printf("a, b, c 입력 : ");
	scanf_s("%lf %lf %lf", &a, &b, &c);

	double d = b * b - 4 * a * c;	// 판별식
	double s1, s2;	// 2개의 근

	if (d < 0)
		printf("실근이 없다.\n");
	else {
		s1 = (-b + sqrt(d)) / (2 * a);
		s2 = (-b - sqrt(d)) / (2 * a);
		printf("해 : %.2f, %.2f\n", s1, s2);
	}
}
