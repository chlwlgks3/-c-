#include <stdio.h>
void main() {

	//산술연산자(사칙연산)
	int iNum1 = 10 ;
	int iNum2 = 3;
	
	//연산을 수행한다 -->하나의 값을 만든다.

	printf("%d + %d = %d\n", iNum1, iNum2, (iNum1 + iNum2));
	printf("%d - %d = %d\n", iNum1, iNum2, (iNum1 - iNum2));
	printf("%d * %d = %d\n", iNum1, iNum2, (iNum1*iNum2));
	printf("%d / %d = %d\n", iNum1, iNum2, (iNum1 / iNum2));
	printf("%d %% %d = %d\n", iNum1, iNum2, (iNum1%iNum2));
	//%연산 = 나머지 값을 구하는 연산

	//정수와 정수의 연산결과는 '무조건'정수이다.
	//iNum1 /iNum2 --->10/3의 결과는 3.333이지만, 정수라서 3이나온다.


}