#include <stdio.h>
#include <string.h>

int main()
{
	char name[3][20];

	for (int i = 0; i < 3; i++) {
		printf("이름 입력 : ");
		scanf_s("%s", name[i], sizeof(name[i]));
		//getchar(); 
	}

	for (int i = 0; i < 3; i++)
		printf("%s %d글자\n", name[i], strlen(name[i]));

}