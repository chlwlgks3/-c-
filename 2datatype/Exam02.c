// Exam02.c

#include <stdio.h>

void main()
{
	// 2. 실수형 (소수)
	float  fValue = 2.2f; // 실수 상수를 표기할 때 f를 붙이면 float이 된다. 
	double dValue = -3.36666666666; // 아무것도 붙이지 않으면 기본이 double 

	printf("fValue = %f\n", fValue); // 기본 소수점 6번째 자리까지 출력
	printf("dValue = %f\n", dValue); // 자동 반올림 

	printf("dValue : %.2f\n", dValue); // [.m] : 소수점 지정 
	printf("dValue = %.7f\n", dValue);
	printf("fValue = %.3f\n", fValue);

}
