#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* src, * dst;
	char buffer[1024];

	src = fopen("minions.jpg", "rb");
	dst = fopen("out.jpg", "wb");

	int cnt;

	while ((cnt = fread(buffer, 1, sizeof(buffer), src)) > 0)
		fwrite(buffer, 1, cnt, dst);

	fclose(src);
	fclose(dst);
}