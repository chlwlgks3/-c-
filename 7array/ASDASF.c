/*
	05 ������Ʈ - Practice03.c ����

	�������� ��� ���� 2�����迭�� ���� �� ����ϱ�

		1. �����ϴ� for��
				i, j�� �̿��Ͽ� �迭�� �� �����ϱ� (��� X)

		2. ����ϴ� for��
				printf("%2d * %2d = %2d\t", i, j, arr[i][j]);
				�̷� ���·� i,j �� �迭�� ���� ����Ͽ� ����ϱ�
				(�� �ڵ尡 ������ �ƴ�)
*/

#include <stdio.h>

void main()
{
	int i = 0;
	int j = 0;
	int iArr[8][9];

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 9; j++)
		{
			iArr[i][j] = (i + 2)*(j + 1);
		}
	}
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 9; j++)
		{
			printf("%2d * %2d = %2d", i + 2, j + 1, iArr[i][j]);
		}
	}
}

