// 10진수, 8진수, 16진수로 출력하기
#include <stdio.h>

int main()
{
	int x; 

	printf("x값을 입력하세요 : ");
	scanf_s("%d", &x);

	printf("DEC : %d\n", x);
	printf("OCT : %o\n", x);
	printf("HEX : %X\n", x);
}