#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "Action speaks louder than words";
	char dest[100];

	// (1) 함수사용
	strcpy_s(dest, sizeof(dest), src);
	strcpy(dest, src);

	// (2) 문자복사
	int i;
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	printf("src : %s\n", src);
	printf("dest : %s\n", dest);


}