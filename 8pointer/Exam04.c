#include <stdio.h>


//[����]
void PrintArr(int* pArr, int iArrLen);

void main()
{
	//�Լ����� �ܺ� �迭�� �ٷ� �� �ִ�.
	//�迭�� ��� ��Ҹ� ����ϴ� �Լ��� ����� ȣ���Ѵ�.

	int iArr1[5] = { 10,20,30,40,50 };
	int iArr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int iArrLen = 0;

	iArrLen = sizeof(iArr1) / sizeof(iArr1[0]);
	PrintArr(iArr1, iArrLen);

	iArrLen = sizeof(iArr2) / sizeof(iArr2[0]);
	PrintArr(iArr2, iArrLen);
}

//[����]
void PrintArr(int* pArr, int iArrLen)	//���̴� �����Լ����� ���޹޾ƾ߸� �� �� �ִ�.
{
	int i = 0;
	printf("�迭�� ��� ��� : ");
	for (i = 0; i < iArrLen; i++)
	{
		printf("%d ", pArr[i]);
	}
	printf("\n");
}