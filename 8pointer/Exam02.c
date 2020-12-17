#include <stdio.h>

//[����]
void SwapValue(int iNum1, int iNum2);
void SwapRef(int * pNum1, int * pNum2);

void main()
{
	/*
		�����͸� ����ϴ� ���� ?
			1. �Լ��� ���๮���� �Լ� �ܺ��� ������ ����
			2. �����Ҵ�


		�Լ����� �Ű������� ���� ���� ���� �޴� ���
			1. Call by Value
				-���� ���� ȣ��
				-�츮�� ���� �Լ��� ȣ���ߴ� ����
				-���� '��'�� ���� �޴´�.

			2.Call by Reference(address)
				-������ ���� ȣ��(�ּҿ� ���� ȣ��)
				-�����ͺ����� �Ű������� ����Ͽ� '�ּ� ��'�� �޴´�.
					> �Լ� �ܺ��� ������ ������ �� �ִ�.
	*/
	int iNum1 = 100;
	int iNum2 = 200;

	SwapValue(iNum1, iNum2);
	// SwapValue ȣ�� �� ������ ����� ���� '��'(100,200)�� ����! 
	printf("SwapValue ȣ�� ��, iNum1(%d), iNum2(%d)\n", iNum1, iNum2); //SwapValue �Լ����� �����Լ��κ��� ���޹��� iNum1 �� iNum2�� ���ǰ� �� �� �Լ��������� �Ҹ�ȴ�.

	SwapRef(&iNum1, &iNum2);
	printf("SwapRef ȣ�� ��, iNum1(%d), iNum2(%d)\n", iNum1, iNum2);  //SwapRef �Լ����� �ܺ��Լ��� �����Լ��� ������ iNum1�� iNum2�� �����Ͽ� ���� ������ �����Ѵ�.
}


//[����]
void SwapValue(int iNum1, int iNum2)
{
	int iTemp = iNum1; //�ӽð����� iNum1�� ���� ����
	iNum1 = iNum2;
	iNum2 = iTemp; //�ӽð����� ��(����iNum1�� ��)�� iNum2�� ����

	printf("SwapValue ���๮, iNum1(%d), iNum2(%d)\n", iNum1, iNum2);
}

void SwapRef(int * pNum1, int * pNum2)
{
	int iTemp = *pNum1;
	*pNum1 = *pNum2;
	*pNum2 = iTemp;
}