/*
	���� ������ �Է¹޾Ƽ� 
	1 : 1st
	2 : 2nd
	3 : 3rd
		�� �� : ~th
		0���� : "�ٽ� �Է��ϼ���."
 
	do~while�� switch~case�� �ݶ�

	[��°��]
	���ڸ� �Է��ϼ��� : -1
	�ٽ� �Է��ϼ���.
	���ڸ� �Է��ϼ��� : 1
	1st

	���ڸ� �Է��ϼ��� : 10
	10th
*/

#include <stdio.h>

void main()
{
	int i =0;

	do
	{
		printf("���ڸ� �Է��ϼ���: ");
		scanf("%d", &i);
		if (i < 0)
		{
			printf("�ٽ� �Է��ϼ���.");
		}

		else if (i >=4)
		{
			printf("%dth\n", i);

		}
		switch (i)
		{
		case 1: printf("1st\n");
			break;
		case 2: printf("2nd\n");
			break;
		case 3: printf("3rd\n");
			break;
		}
	} while (i != 0);
} 
