/*
	�Ǻ���ġ ���� fibo
		�Է¹��� Ƚ����ŭ �Ǻ���ġ���� ���
			1 1 2 3 5 8 13 21 34 ...
			n = (n-1) + (n-2)
		 
		1. �迭�� ũ��� �˳��ϰ� 100���� ����
		2. ó�� �� ���� 1�� ���� ���̹Ƿ� �迭�� ���� �ְ� ����
		3. �Է� ���� Ƚ����ŭ �ݺ��ϸ� �Ǻ���ġ �迭�� ������ ä���. (for�� 1)
		4. ������ �� ä��� �� �� ����Ѵ�. (for�� 2)
*/

#include <stdio.h>

void main()
{
	int iArrFibo[100] = {0, };
	int iCount = 0;
	int i = 0;
	
	iArrFibo[0] = 1;
	iArrFibo[1] = 1;
	for (iCount = 2; iCount < 99; iCount++)
	{
		iArrFibo[iCount] = iArrFibo[iCount - 1] + iArrFibo[iCount - 2];
	}

	for (i = 0; i < 99; i++)
	{
		if (iArrFibo[i] > 10000)
		{
			break;
		}
		printf("%d  ", iArrFibo[i]);
	}
}
/* �ٸ� ��
#include <stdio.h>

void main()
{
	int i = 0;
	int j = 0;
	int iCount = 0;
	int iFibo[100];

	iFibo[0] = 1;
	iFibo[1] = 1;

	printf("Ƚ���� �Է��ϼ���: ");
	scanf("%d", &iCount);

	for (i = 2; i <= iCount; i++)
	{
		iFibo[i] = iFibo[i - 1] + iFibo[i - 2];
	}
	for (j = 0; j <=iCount; j++)
	{
		printf("%d ", iFibo[j]);
	}
}

*/






