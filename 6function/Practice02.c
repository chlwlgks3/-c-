#include <stdio.h>

int SelectLanguage();

void main()
{
	/*
		��°���� �������� �Լ� �ϼ��ϱ�

		[��°��]
		1. C���
		2. JAVA
		3. PYTHON
		������ ��� �ڵ带 �Է��ϼ��� : 1
		������ ��� �ڵ�� 1�� �Դϴ�.
	*/
	int iLanguage = 0;

	iLanguage = SelectLanguage();

	printf("������ ��� �ڵ�� %d�� �Դϴ�.\n", iLanguage);
}

int SelectLanguage()
{
	int iNum;
	printf("1. C���\n2.JAVA\n3.PYTHON\n");
	printf("������ ��� �ڵ带 �Է��ϼ���: ");
	scanf("%d", &iNum);
	return iNum;
}
