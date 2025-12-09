#include <stdio.h>

double add(double a, double b) {
	return a + b;
}

double subtract(double a, double b) {
	return a - b;
}

double multiply(double a, double b) {
	return a * b;
}

double divide(double a, double b) {
	return a / b;
}

int main()
{
	double a, b;
	char op;

	printf("두 숫자 입력 : ");
	scanf_s("%lf %lf", &a, &b);
	getchar();	// '\n' 처리

	printf("사칙연산을 선택하세요 : ");
	
	op = getchar();

	switch (op) {
	case '+':
		printf("덧셈결과 = %f\n", add(a, b));
		break;
	case '-':
		printf("뺄셈결과 = %f\n", subtract(a, b));
		break;
	case '*':
		printf("곱셈결과 = %f\n", multiply(a, b));
		break;
	case '/':
		printf("나눗셈결과 = %f\n", divide(a, b));
		break;
	default:
		break;
	}
}