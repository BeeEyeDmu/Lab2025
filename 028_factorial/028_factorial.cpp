#include <stdio.h>

int main()
{
	int n, fact = 1, sum = 0;

	printf("n 입력 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		fact *= i;
		printf("%d! = %d\n", i, fact);
	}

	for (int i = 1; i <= n; i++) {
		sum += i;
		printf("%d까지의 합 = %d\n", i, sum);
	}
}