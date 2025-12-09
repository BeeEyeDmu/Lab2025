#include <stdio.h>

struct point {
	int x, y;
};

struct rect {
	struct point p1, p2;
};

int peri(struct rect r)
{	
	return 2 * ((r.p2.x - r.p1.x) + (r.p2.y - r.p1.y));
}

int area(struct rect r)
{
	return (r.p2.x - r.p1.x) * (r.p2.y - r.p1.y);
}

int main()
{
	rect r;

	printf("점의 좌표 (x, y) : ");
	scanf_s("%d %d", &r.p1.x, &r.p1.y);

	printf("점의 좌표 (x, y) : ");
	scanf_s("%d %d", &r.p2.x, &r.p2.y);

	printf("점의 좌표 : (%d, %d) - (%d, %d)\n",
		r.p1.x, r.p1.y, r.p2.x, r.p2.y);

	printf("둘레 = %d\n", peri(r));

	printf("면적 = %d\n", area(r));

}