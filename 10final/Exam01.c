#include <stdio.h>

#define MULTIPLY(a,b) (a*b)

void main()
{
	float f = 100 / MULTIPLY(2 + 3, 4 + 5);
	//		100/	2+3*4+5=19   =5.26  --> 정수/정수 이므로 자동형변환 되어 5.26이 아니라 5가 나옴 100이나 MUL 앞에 (float)붙이면 소숫점나옴
	printf("%f\n", f);
}