#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* in, * out;	

	in = fopen("070_filecopy.cpp", "r");
	out = fopen("out.txt", "w");

	//int c;
	//while ((c = fgetc(in)) != EOF)
	//	fputc(c, stdout);

	char buffer[100];
	while (fgets(buffer, 100, in) != NULL)
		fputs(buffer, out);

	fclose(in);
	fclose(out);
}