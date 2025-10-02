#include <stdio.h>

int main()
{
	int n;	// 피라미드 높이

	printf("높이 입력 : ");
	scanf_s("%d", &n);

	printf("\n1번 피라미드\n");
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	printf("\n2번 피라미드\n");
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}

	printf("\n3번 피라미드\n");
	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	printf("\n4번 피라미드\n");
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++)
			printf(" ");
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	printf("\n5번 피라미드\n");
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++)
			printf(" ");
		for (int j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}

	printf("\n6번 피라미드\n");
	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= n - i; j++)
			printf(" ");
		for (int j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
}