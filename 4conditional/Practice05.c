/*
	Exam05 �� ���� �Ǻ��� switch~case ������!!
		1. ���ڹ����� ���� ����� Ȱ��
		2. (���� / ����) �� ��� Ȱ��! case 10:����  ~ defalut:����
*/

#include <stdio.h>

void main()
{
	int iScore = 0;
	printf("���� �Է� : ");
	scanf("%d", &iScore);

	switch (iScore / 10)
	{
	case 10:
		printf("(����)A����\n");
		break;
	case 9: 
		printf("A����\n");
		break;
	case 8:
		printf("B����\n");
		break;
	case 7:
		printf("C����\n");
		break;

	default :
		if (iScore == 0)
		{
			printf("(����)");
		}
		printf("F����\n");
	}
}