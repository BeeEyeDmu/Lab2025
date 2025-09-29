// 영문 대문자 소문자 (문자와 숫자로) 출력하기

#include <stdio.h>

int main()
{
	char a = 'A'; 
	char b = 'a';

	printf("%c %d %X\n", a, a, a);
	printf("%c %d %X\n", b, b, b);
}