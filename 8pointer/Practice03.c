/*
	ũ�� 5�� �����迭�� ���� �Է� �ް�, ���� ū �� ����ϱ�
*/

#include <stdio.h>

int FindMaxValue(int* pArr, int iArrLen);

void main()
{
	int iArr[5]		= {0, };
	int iMaxValue	= 0;
	int i = 0;

	// �ڵ� �ۼ�
	printf("���� 5�� �Է� : ");
	for( i = 0; i < 5; i++ )
	{
		scanf("%d", &iArr[i]);
	}

	iMaxValue = FindMaxValue(iArr, 5);

	printf("���� ū �� : %d\n", iMaxValue);
}

int FindMaxValue(int* pArr, int iArrLen)
{

}