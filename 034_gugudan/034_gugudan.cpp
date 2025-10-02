#include <stdio.h>

int main()
{
	for (int j = 1; j <= 9; j++) {
		for (int i = 2; i <= 5; i++)
			printf("%d x %d = %d\t", i, j, i * j);
		printf("\n");
	}
	printf("\n");

	for (int j = 1; j <= 9; j++) {
		for (int i = 6; i <= 9; i++)
			printf("%d x %d = %d\t", i, j, i * j);
		printf("\n");
	}

	// 곱셈표
	printf("\n곱셈표\n");
	for (int j = 1; j <= 9; j++) {
		for (int i = 2; i <= 9; i++)
			printf("%4d", i * j);
		printf("\n");
	}
}