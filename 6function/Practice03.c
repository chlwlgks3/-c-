/*
	���ȣ���� �̿��Ͽ� ���丮�� �Լ� �����

		���丮��(factorial) : 1���� Ư�� ������ ������ ��� ���� ��
			5! = 5 * 4 * 3 * 2 * 1
			3! = 3 * 2 * 1
			   = 3 * 2!
			   = 3 * 2 * 1!
			1! = 1

			n! = n * (n-1)!
		
		�Լ�
			��� : ���޵� ������ ���丮���� ���� ���� ��ȯ
			�Լ��� : GetFactorial

		[��°��]
		���ڸ� �Է��ϼ��� : 5
		5! = 120
*/


#include <stdio.h>

int GetFactorial(int iNum);

void main()
{
	int iInput = 0;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &iInput);

	printf("%d! = %d\n", iInput, GetFactorial(iInput));
}

int GetFactorial(int iNum)
{
	if (iNum == 0)
	{
		return 1;
	}
	else
	{
		return  iNum * GetFactorial(iNum - 1);
	}
}
