/*
	- 두 개의 정수를 입력 받아 큰 수에서 작은 수를 뺀 결과 값을 출력
		> 함수 : 매개변수로 2개의 정수를 받고, 계산하여 결과 값 반환

	[출력결과]
	두 수 입력 : 1 20
	결과 : 19 
*/

#include <stdio.h>

int Sub(int iNum1, int iNum2);

void main()
{
	int iNum1 = 0;
	int iNum2 = 0;

	printf("두 수 입력: ");
	scanf("%d %d", &iNum1, &iNum2);
	printf("결과 : %d", Sub(iNum1, iNum2));
}

int Sub(int iNum1, int iNum2)
{
	int iResult;
	if (iNum1 > iNum2)
	{
		iResult = iNum1 - iNum2;
	}

	else if (iNum1 < iNum2)
	{
		iResult = iNum2 - iNum1;
	}

	else
	{
		iResult = 0;
	}
	return iResult;
}