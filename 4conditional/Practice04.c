/*
	ȸ�� ��޿� ���� ���� ����ϱ�
		switch~case�� ���
			3��� - ����,����,�б�
			2��� - ����,�б�
			1��� - �б�

	[��°��]
	����� ȸ������� �Է����ּ��� : 2
	������� �ο�
	�б���� �ο�
*/

#include <stdio.h>

void main()
{
	int iNum = 0; 

	printf("����� ȸ������� �Է����ּ��� : ");
	scanf("%d", &iNum);

	switch (iNum)
	{
	case 3:
		printf("�������� �ο�\n");
	case 2:
		printf("������� �ο�\n");
	case 1:
		printf("�б���� �ο�\n");
		break;
	default :
		printf("�߸� �Է��Ͽ����ϴ�.\n");
	}
}