/*
	����,����,���� �� ������ ������ �Է� �ް�,
	������ ����� ����ϼ���. (����� �Ҽ��� ���� 1�ڸ�����)
	
	[��°��]
	����,����,���� ������ ���ʷ� �Է��ϼ��� : 97 86 95
	���� : 278��
	��� : 92.7��
*/

#include <stdio.h>

void main()
{
	int iKor = 0; 
	int iEng = 0;
	int iMath = 0;
	int iTotal = 0;

	printf("����,����,���� ������ ���ʷ� �Է��ϼ��� : ");
	scanf("%d %d %d", &iKor, &iEng, &iMath);
	iTotal = iKor + iEng + iMath;

	printf("���� : %d��\n", iTotal);
	printf("��� : %.1f��\n", iTotal/3.);
}