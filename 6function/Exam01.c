#include <stdio.h>

// [����]
int GetSum(int iNum); //�����̹Ƿ� �����ݷ� �ʿ�

void main() 
{
	int iInput = 0;
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &iInput);

	printf("1~%d������ �� : %d\n", iInput, GetSum(iInput));

	printf("1~10������ ��: %d\n", GetSum(10));
	printf("1~20������ ��: %d\n", GetSum(20));
	printf("1~30������ ��: %d\n", GetSum(30));
	//�Ȱ��� �ڵ尡 ���� �� ȣ��ȴ�. (�ʿ��� ���� �����ؼ�)
}

//[����]
// ���: 1���� ���޵� 1���� ���ڱ����� ���� ���ؼ� ��ȯ
int GetSum(int iNum)
{
	int i = 0;
	int iSum = 0;

	for (i = 1; i <= iNum; i++)	// 1 ~ iNum���� 1�� �����ϸ鼭
	{
		iSum += i;  // ����
	}
	return iSum;
}