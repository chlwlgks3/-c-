#include <stdio.h>

void main() 
{
	//continue �� break
	int i = 0;

	//continue
	for (i = 0; i < 3; i++) //i : 0,1,2 ���� 3��
	{
		if (i == 1)
		{
			continue; // �� ���� ���������� ����
			// ���๮�� ������ ���ο� ����
		}
		printf("%d\n", i);
		//���� ���๮�� ������ ����

	}

	//�� ���� i�� ���� 3
	printf("=====\n");

	//break

	for (i = 0; i < 3; i++)
	{
		if (i == 1)
		{
			break;
		}
		printf("%d\n", i);
	}

	printf("%d\n", i); //i �� 1�϶� break�� �������Ƿ� �� ���� i�� ���� 1

}