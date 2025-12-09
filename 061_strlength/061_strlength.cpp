#include <stdio.h>
#include <string.h>

int main()
{
	char s[100];

	fgets(s, 100, stdin);	// 표준입력(키보드)에서 100개까지의 문자를 입력
	s[strcspn(s, "\n")] = '\0';

	// (1) 반복문
	int i;
	for (i = 0; s[i] != '\0'; i++)
		;
	int len = i;
	printf("%s : %d\n", s, len);

	// (2) 라이브러리 함수
	len = strlen(s);

	printf("%s : %d\n", s, len);
}