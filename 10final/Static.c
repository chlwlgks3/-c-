/*
	��������
		- �������� : Ư���������� �����Ǵ� ����(������ ������ �ڵ��Ҹ�)
			>�Լ��� ���ǹ�, �ݺ��� ���� '���๮'���� �����Ǵ� ����
		
		- �������� : ��ü ����
			>���α׷� ���� �� ����, ���� �� �Ҹ�
			>�Լ� �ܺο� ����
			>���α׷� ��ü �ڵ忡�� ���ٰ���(���ϴ�.)
				>>�Ű������� ���� ������ �ʿ䰡 ����.
				>>�ʹ� ���� ����ϴ°� ���� �ʴ�.(���α׷��� ����)
*/

#include <stdio.h>

int sNum1; //���������� �ʱ�ȭ���� ������ �ڵ����� 0���� �ʱ�ȭ(���������� �ʱ�ȭ���ϸ� �����Ⱚ �������.)

//[����]
void Func();

void main()
{
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		Func();
	}

}
//[����]
void Func()
{
	int iNum = 0; // Func() �Լ��� �������� (ȣ��Ǹ� ����, ���� ������ �Ҹ�)
					//ȣ��� �� ���� ��� ���� ���� (�ʱⰪ0)

	static int sNum2; // ��������ȭ
	//���� �ȿ��� static�� �̿��Ͽ� ��������ó�� ������� ����
	//1. ���α׷� ����� ������ �����Ǵ� ����(�������� Ư¡)
	//2. ��, �� �Լ� �ȿ����� ����� ����(�������� Ư¡)

	sNum1++;	//���������̱� ������ �ƹ������� ��밡��
	iNum++;
	sNum2++;

	printf("sNum1(%d), iNum(%d), sNum2(%d)\n", sNum1, iNum, sNum2);
}