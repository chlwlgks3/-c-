#include <stdio.h>

void main()
{
	// �迭�� ��� ��� ������ �� ���ϱ�
	// for�� �̿�
	int iArr[] = {1,2,3,4,5,6,7,8,9,10};
	
	/////////////////////////////////////////////////////////////
	int i = 0;
	int iTotal = 0;                  //	int iArrLen = sizeof(iArr) / sizeof(iArr[0]);
	for (i = 0; i < 10; i++)		 // for (i = 0; i < iArrLen; i++){...}
	{
		iTotal += iArr[i];
	}
	printf("iArr�迭�� ��� �������� ���� %d�Դϴ�\n", iTotal);
	
}
