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
	int iArrGugu[8][9] = {0, };
	int i = 0;
	int j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 9; j++)
		{
			iArrGugu[i][j] = (i + 2) * (j + 1);
		}
	}

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 9; j++)
		{
			printf("%2d * %2d = %d\n", i + 2, j + 1, iArrGugu[i][j]);
		}
	}
}