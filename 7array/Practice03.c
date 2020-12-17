/*
	피보나치 수열 fibo
		입력받은 횟수만큼 피보나치수열 출력
			1 1 2 3 5 8 13 21 34 ...
			n = (n-1) + (n-2)
		 
		1. 배열의 크기는 넉넉하게 100으로 선언
		2. 처음 두 개의 1은 고정 값이므로 배열에 값을 넣고 시작
		3. 입력 받은 횟수만큼 반복하며 피보나치 배열의 값들을 채운다. (for문 1)
		4. 값들을 다 채우고 난 후 출력한다. (for문 2)
*/

#include <stdio.h>

void main()
{
	int iArrFibo[100] = {0, };
	int iCount = 0;
	int i = 0;
	
	iArrFibo[0] = 1;
	iArrFibo[1] = 1;
	for (iCount = 2; iCount < 99; iCount++)
	{
		iArrFibo[iCount] = iArrFibo[iCount - 1] + iArrFibo[iCount - 2];
	}

	for (i = 0; i < 99; i++)
	{
		if (iArrFibo[i] > 10000)
		{
			break;
		}
		printf("%d  ", iArrFibo[i]);
	}
}
/* 다른 답
#include <stdio.h>

void main()
{
	int i = 0;
	int j = 0;
	int iCount = 0;
	int iFibo[100];

	iFibo[0] = 1;
	iFibo[1] = 1;

	printf("횟수를 입력하세요: ");
	scanf("%d", &iCount);

	for (i = 2; i <= iCount; i++)
	{
		iFibo[i] = iFibo[i - 1] + iFibo[i - 2];
	}
	for (j = 0; j <=iCount; j++)
	{
		printf("%d ", iFibo[j]);
	}
}

*/






