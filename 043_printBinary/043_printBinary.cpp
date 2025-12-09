#include <stdio.h>
void printBinary(int n)
{
	if (n > 0) {
		printBinary(n / 2);
		printf("%d", n % 2);
	}
}
int main()
{
	int n;

	printf("n 입력 : ");
	scanf_s("%d", &n);

	printBinary(n);
}