#include <stdio.h>


//[선언]
void PrintArr(int* pArr, int iArrLen);

void main()
{
	//함수에서 외부 배열을 다룰 수 있다.
	//배열의 모든 요소를 출력하는 함수를 만들고 호출한다.

	int iArr1[5] = { 10,20,30,40,50 };
	int iArr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int iArrLen = 0;

	iArrLen = sizeof(iArr1) / sizeof(iArr1[0]);
	PrintArr(iArr1, iArrLen);

	iArrLen = sizeof(iArr2) / sizeof(iArr2[0]);
	PrintArr(iArr2, iArrLen);
}

//[정의]
void PrintArr(int* pArr, int iArrLen)	//길이는 메인함수에서 전달받아야만 알 수 있다.
{
	int i = 0;
	printf("배열의 모든 요소 : ");
	for (i = 0; i < iArrLen; i++)
	{
		printf("%d ", pArr[i]);
	}
	printf("\n");
}