#include <stdio.h>

void main()
{
	// 배열에 담긴 모든 숫자의 합 구하기
	// for문 이용
	int iArr[] = {1,2,3,4,5,6,7,8,9,10};
	
	/////////////////////////////////////////////////////////////
	int i = 0;
	int iTotal = 0;                  //	int iArrLen = sizeof(iArr) / sizeof(iArr[0]);
	for (i = 0; i < 10; i++)		 // for (i = 0; i < iArrLen; i++){...}
	{
		iTotal += iArr[i];
	}
	printf("iArr배열에 담긴 모든숫자의 합은 %d입니다\n", iTotal);
	
}
