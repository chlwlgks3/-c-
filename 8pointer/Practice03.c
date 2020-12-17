/*
	크기 5인 정수배열에 값을 입력 받고, 가장 큰 값 출력하기
*/

#include <stdio.h>

int FindMaxValue(int* pArr, int iArrLen);

void main()
{
	int iArr[5]		= {0, };
	int iMaxValue	= 0;
	int i = 0;

	// 코드 작성
	printf("정수 5개 입력 : ");
	for( i = 0; i < 5; i++ )
	{
		scanf("%d", &iArr[i]);
	}

	iMaxValue = FindMaxValue(iArr, 5);

	printf("가장 큰 값 : %d\n", iMaxValue);
}

int FindMaxValue(int* pArr, int iArrLen)
{

}