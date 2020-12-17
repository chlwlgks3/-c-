/*
	3���� �л� ������ �Է� �ް� ����ϱ�
		- �л� ����
			�̸�
			����
			��ȭ��ȣ (���ڿ�)
			����1 ����
			����2 ����
			����3 ����
		- ���
			> ��� ���� 90�� �̻� 1, 80�� �̻� 2, 70�� �̻� 3, ������ 4
		- �л� ���� �Է� �޴� �Լ� : InputStudent()
		- �л� ���� ����ϴ� �Լ� : PrintStudent()
		- ������ (enum) ��� -> GRADE = { GRADE1, GRADE2, ...

[��°��]
	[1�� �л� ���� �Է�]
	�̸� : ȫ�浿
	���� : 20
	��ȣ : 010-2233-4455
	����1 : 100
	����2 : 90
	����3 : 91
	...

	[ȫ�浿 �л��� ����]
	���� : 20��
	��ȣ : 010-2233-4455
	���� : 281
	��� : 93.7
	��� : 1���
*/

#include <stdio.h>

enum _GRADE {
	GRADE_1 = 1,
	GRADE_2,
	GRADE_3,
	GRADE_4
};

typedef struct _STUDENT
{
	char	szName[20];
	int		iAge;
	char	szNum[20];
	int		iArrScore[3];
} STUDENT;

void InputStudent( STUDENT* pStudent, int iNum );
void PrintStudent( STUDENT* pStudent );

void main()
{
	STUDENT sStudent[3] = {0, };
	int i = 0;

	for ( i = 0; i < 3; i++ )
	{
		InputStudent( &sStudent[i], (i+1) );
	}
	
	for ( i = 0; i < 3; i++ )
	{
		PrintStudent( &sStudent[i] );
	}
}

void InputStudent(STUDENT* pStudent, int iNum)
{
	printf("[%d�� �л� ���� �Է�]\n", iNum);
	printf("�̸� : ");
	scanf("%s", &pStudent->szName);
	printf("���� : ");
	scanf("%d", &pStudent->iAge);
	printf("��ȣ : ");
	scanf("%s", &pStudent->szNum);
	printf("����1 : ");
	scanf("%d", &pStudent->iArrScore[0]);
	printf("����2 : ");
	scanf("%d", &pStudent->iArrScore[1]);
	printf("����3 : ");
	scanf("%d", &pStudent->iArrScore[2]);
}

void PrintStudent(STUDENT* pStudent)
{
	int		iTotal		= 0;
	double	dAverage	= 0;

	iTotal		= pStudent->iArrScore[0] + pStudent->iArrScore[1] + pStudent->iArrScore[2];
	dAverage	= iTotal/3.;

	printf("[%s �л��� ����]\n", pStudent->szName);
	printf("���� : %d��\n", pStudent->iAge);
	printf("��ȣ : %s\n", pStudent->szNum);
	printf("���� : %d��\n", iTotal);
	printf("��� : %.1f��\n", dAverage);
	
	switch( (int)dAverage/10 )
	{
	case 10:
	case 9:
		printf("��� : %d���\n", GRADE_1);
		break;
	case 8:
		printf("��� : %d���\n", GRADE_2);
		break;
	case 7:
		printf("��� : %d���\n", GRADE_3);
		break;
	default :
		printf("��� : %d���\n", GRADE_4);
	}

	printf("=======================\n");
}
