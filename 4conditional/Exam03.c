

#include <stdio.h>

void main()
{
	//if, else if, else ���
	int iNum = 0;
	printf("�����Է�: ");
	scanf("%d", &iNum);

	//�Էµ� ������ ��/0/�� �Ǻ�

	if (iNum > 0)
	{
		printf("���\n");
	}

	else if (iNum < 0)
	{
		printf("����\n");
	}
	else if (iNum == 0) //�񱳿�������� �ؾ��Ѵ�. (cpu���)
	{
		printf("0�̴�\n");
	}
	else //����� ���� ������ 3���� ���� else if�� ���� ���� �ʿ䰡����. (ȿ������ ���ؼ� else if ��� else������ش�.)

	{
		printf("0�̴�\n");
	}




}