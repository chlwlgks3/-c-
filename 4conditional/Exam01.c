// Exam01.c

#include <stdio.h>

void main()
{
	// if�� ��� 
	int iValue = 0;

	// 1�� 
	if (iValue == 0)
	{
		printf("1. iValue == 0\n");
	}

	// 2�� 
	if (iValue != 0)
	{
		printf("2. iValue != 0\n");
	}

	// 3�� 
	if (!(iValue == 0))
	{
		printf("3. !(iValue == 0)\n");
	}

	// 4�� 
	if (!(iValue != 0))
	{
		printf("4. !(iValue != 0)\n");
	}

	//5��: ���๮�� �ڵ尡 1���̸�, {}��������
	if (iValue == 0)
		printf("5.iValue ==0\n");

	//6��: ���๮�� �ڵ尡 1���̸�, �����ٿ� ����ص� ��
	if (iValue != 0) printf("6.iValue != 0\n");

	//7��
	if (!(iValue != 0))
		printf("7.!(iValue !=0)\n");
	    printf("���� 7���� ���๮!\n"); //if������ ������� ������ ���� {}���ش� �򰥸� ������ ���� 

}