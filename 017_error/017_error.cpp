// 017_error.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <math.h>

int main()
{
  double a = 0.3 - 0.2;
  double b = 0.1;

  printf("%.20f\n", a);
  printf("%.20f\n", b);
  printf("%.20f\n", fabs(a-b));

  if (a == b)
    printf("같다\n");
  else
    printf("다르다\n");

  if(fabs(a-b) < 1e-6)
    printf("같다\n");
  else
    printf("다르다\n");
}
