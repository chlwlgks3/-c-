/*
	1���� �Է¹��� ������ ¦������ ���� ���ϱ�

	[��°��]
	���ڸ� �Է��ϼ��� : 10
	1~10���� ¦���� ���� 30�Դϴ�.
*/
#include <stdio.h>

void main()
{
	int iNum = 0;
	int i = 0;
	int iSum = 0;
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &iNum);

	for (i = 0; i <= iNum; i++)
	{
		if (i % 2 == 1)
		{
			continue;
		}
		iSum += i;
	}
	printf("1~%d���� ¦���� ���� %d�Դϴ�.", iNum, iSum);

}
/*
	int iNum =0;
	int i=0;
	int iSum=0;

	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &iNum);

	for(i=1;i<=iNum;i++)
	{
		if (i % 2==0)
		{
			iSum +=i;
		}

	}
	printf("1~%d���� ¦���� ���� %d�Դϴ�\n." , iNum , iSum);


*/