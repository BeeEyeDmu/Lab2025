#include <stdio.h>
int isPrime(int n) 
{
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return 0;	// 소수 아님

	return 1;
}

int main()
{
	int n;
	int cnt = 0;

	printf("n입력 : ");
	scanf_s("%d", &n);

	for (int i = 2; i <= n; i++)
		if (isPrime(i) == 1) {
			printf("%d ", i);
			cnt++;
		}

	printf("\n갯수 = %d\n", cnt);;
	
}