/*
	- �� ���� ������ �Է� �޾� ū ������ ���� ���� �� ��� ���� ���
		> �Լ� : �Ű������� 2���� ������ �ް�, ����Ͽ� ��� �� ��ȯ

	[��°��]
	�� �� �Է� : 1 20
	��� : 19 
*/

#include <stdio.h>

int Sub(int iNum1, int iNum2);

void main()
{
	int iNum1 = 0;
	int iNum2 = 0;

	printf("�� �� �Է�: ");
	scanf("%d %d", &iNum1, &iNum2);
	printf("��� : %d", Sub(iNum1, iNum2));
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