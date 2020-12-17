/*
	������ ( enumeration )
		-'����'�� �̸� �����س��� �ڷ���
		-������ ��� �뵵�� ����
		-�⺻�� 0 (���� �������� �ʾ��� ��)
		-���� �������� ������ ���� ���ں��� 1����
		-���ϴ� ������ ��� ��ġ�� ������ �� �ִ�.
		-�׸��̸��� �ߺ��Ǹ� �ȵȴ�.
*/

#include <stdio.h>

enum ENUM1 { A1, B1, C1, D1, E1 };
enum ENUM2 { A2 = 1, B2 , C2=-200, D2, E2};

enum _LANGUAGE
{
	LANGUAGE_C = 1,
	LANGUAGE_JAVA,
	LANGUAGE_PYTHON
};

void main()
{
	int iNum = A1; // ������ ���� ��ü�� ������ �ȴ�. (�������� �̸��� �ο�)

	printf("%d %d %d %d %d\n", A2, B2, C2, D2, E2);

	printf("=================================\n");
	printf("[����ִ� ���α׷���~~!]\n");
	printf("1.C���\n");
	printf("2.JAVA\n");
	printf("3.PYTHON\n");
	printf("=================================\n");

	printf("������ �� �Է��ϼ���: ");
	scanf("%d", &iNum);

	switch (iNum)
	{
	case LANGUAGE_C:
		printf("C���\n");
		break;
	case LANGUAGE_JAVA:
		printf("JAVA\n");
		break;
	case LANGUAGE_PYTHON:
		printf("PYTHON\n");
		break;
	}
	// case 1,2,3 �������� ������ �ǹ��ϴ��� �ڵ带 �ٽ� ã�ƺ��� �Ѵ�.
}