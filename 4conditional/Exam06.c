// Exam06.c

#include <stdio.h>

void main()
{
	/*
		2. switch ~ case ��
			- �ϳ��� �������� ���� ����� ���� ó��
				1.  ���ǽ��� ����� '����'�� ���(���� ����)
				2. case���� ���� '���� ���'�� �����ϸ�, �ߺ� �Ұ�

			- break;
				> switch���� ����������.(Ż��)
				> case�� �����ϰ� ������ �ߴµ�, break;�� ������
				  �� �Ʒ� �ִ� ��� case�� ������ ������ �����ϰ� �� ����
				  (break;�� �����ų� switch �� ���� �� ����)
	*/

	int iNum = 0;

	printf("==========================================\n");
	printf("[����ִ� ���α׷���~~!]\n");
	printf("1. C���\n");
	printf("2. JAVA\n");
	printf("3. PYTHON\n");
	printf("==========================================\n");

	printf("������ �� �Է��ϼ��� : ");
	scanf("%d", &iNum);

	switch (iNum) // ���ǽ�(���� ����)
	{
	case 1: // iNum�� 1�̸�, if (iNum == 1)
		printf("C���~~~!\n");
		break;
	case 2:	// iNum�� 2�̸�, else if (iNum == 2)
		printf("JAVA~~!\n");
		break;
	case 3: // iNum�� 3�̸�, else if (iNum == 3)
		printf("PYTHON~~!\n");
		break;
	case 4:

	default : // else 
		printf("�߸� �Է��Ͽ����ϴ�. %d\n", iNum);
	}

	// �� switch ~ case���� if������ ���� 

	if (iNum == 1)
	{
		printf("C���~~!\n");
	}
	else if (iNum == 2)
	{
		printf("JAVA~~!\n");
	}
	else if (iNum == 3)
	{
		printf("PYTHON~~!\n");
	}
	else
	{
		printf("�߸� �Է��Ͽ����ϴ�. %d\n", iNum);
	}
}