/*
	2개의 숫자를 입력 받고 사칙연산과 나머지 결과를 출력하세요.

	[출력결과]
	두 수 입력 : 20 6
	20 + 6 = 26
	20 - 6 = 14
	20 * 6 = 120
	20 / 6 = 3
	20 % 6 = 2
*/

#include <stdio.h>

void main() {
	int iNum1;
	int iNum2;

	printf("두수를 입력하세요: ");
	scanf("%d %d", &iNum1, &iNum2);
	printf("%d + %d = %d\n", iNum1, iNum2, (iNum1 + iNum2));
	printf("%d - %d = %d\n", iNum1, iNum2, (iNum1 - iNum2));
	printf("%d *%d= %d\n", iNum1, iNum2, (iNum1*iNum2));
	printf("%d / %d = %d\n", iNum1, iNum2, (iNum1 / iNum2));
	printf("%d %% %d = %d\n", iNum1, iNum2, (iNum1%iNum2));

}