// Exam07.c

#include <stdio.h>

void main()
{
	// switch ~ case ����
	// ~ ���� �Է� �ް�, ���� ��� 
	int iMonth = 0;
	printf("���� ���� �Է��ϼ��� : ");
	scanf("%d", &iMonth);

	// 3 ~ 5��	: �� 
	// 6 ~ 8��	: ����
	// 9 ~ 11��	: ����
	// 12 ~ 2��	: �ܿ�
	// break���� �����ؼ� printf�� 4���� ��� (��, ����, ����, �ܿ�)
	switch (iMonth)
	{
	case 3:
	case 4:
	case 5:
		printf("��\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("����\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("����\n");
		break;
	case 12:
	case 1:
	case 2:
		printf("�ܿ�\n");
		break;
	default :
		printf("�߸� �Է��Ͽ����ϴ�.\n");

	}
}