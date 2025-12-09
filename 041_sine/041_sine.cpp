#include <stdio.h>
#include <math.h>
#define PI	3.141592

int main()
{
	for (int i = 0; i <= 90; i += 5) {
		printf("%2d\t%.6lf\t%.6lf\n", 
			i, sin(i * PI / 180), cos(i * PI / 180));
	}
}