/*
	3���� ������ �Է¹޾� ��� ������ 60�� �̻��̸� �հ�, �ƴϸ� ���հ�

	[��°��]
	������ ���ʴ�� �Է����ּ��� : 60 60 60
	�հ�
*/

#include <stdio.h>

void main()
{
	int iScore1 = 0;
	int iScore2 = 0;
	int iScore3 = 0;
	int avg = 0;

	printf("������ ���ʴ�� �Է����ּ���: ");
	scanf("%d %d %d", &iScore1, &iScore2, &iScore3);
	avg = (int)(iScore1 + iScore2 + iScore3) / 3.;

	if (avg >= 60) {
		printf("�հ�");
	}
	else {
		printf("���հ�");
	}
	



}