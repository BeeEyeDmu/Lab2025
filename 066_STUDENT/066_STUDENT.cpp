#include <stdio.h>

struct student {
	int id;
	char name[20];
	float grade;
};

void printStudents(struct student s[], int n) 
{
	for (int i = 0; i < n; i++)
		printf("%d\t%s\t%.2f\n", s[i].id, s[i].name, s[i].grade);
}

int main()
{
	struct student s[3] = { {25615001, "홍길동", 4.5},
		{25615002, "임꺽정", 3.0}};

	printf("학번 입력 ");
	scanf_s("%d", &s[2].id);
	printf("이름 입력 ");
	scanf_s("%s", s[2].name, sizeof(s[2].name));
	printf("학점 입력 ");
	scanf_s("%f", &s[2].grade);

	printStudents(s, 3);
	
}