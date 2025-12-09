#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int a[10];

	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
		a[i] = rand() % 100;

	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");

	int min = a[0];
	int max = a[0];

	for (int i = 1; i < 10; i++) {
		if (a[i] < min)
			min = a[i];
		if (a[i] > max)
			max = a[i];
	}

	printf("min = %d, max = %d\n", min, max);
}
