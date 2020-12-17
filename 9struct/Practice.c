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

enum GRADE { GRADE1=1, GRADE2, GRADE3, GRADE4 };

typedef struct _STUDENT {
	char name[20];
	int age;
	char num[20];
	int Score[3];
}STUDENT;

void InputStudent(STUDENT* pStudent, int iNum);
void PrintStudent(STUDENT* pStudent);


int main(void) {
	STUDENT Student[3] = { 0, };
	for (int i = 0; i < 3; i++) {
		InputStudent(&Student[i], i + 1);
	}

	for (int i = 0; i < 3; i++) {
		PrintStudent(&Student[i]);
	}
}

void InputStudent(STUDENT* pStudent,int iNum) {
	printf("[%d�� �л� ���� �Է�]\n", iNum);
	printf("�̸�: ");
	scanf("%s", &pStudent->name);
	printf("����: ");
	scanf("%d", &pStudent->age);
	printf("��ȣ: ");
	scanf("%s", &pStudent->num);
	printf("����1: ");
	scanf("%d", &pStudent->Score[0]);
	printf("����2: ");
	scanf("%d", &pStudent->Score[1]);
	printf("����3: ");
	scanf("%d", &pStudent->Score[2]);
}

void PrintStudent(STUDENT* pStudent) {
	printf("[%s �л��� ����]\n", pStudent->name);
	printf("����: %d��\n", pStudent->age);
	printf("��ȣ: %s\n", pStudent->num);
	int iTotal = 0;
	double dAvg = 0.0;
	int GRADE = 0;
	for (int i = 0; i < 3; i++) {
		iTotal += pStudent->Score[i];
	}
	dAvg = iTotal / 3. ;
	switch ((int) dAvg / 10){
	case 10 :
	case 9 : GRADE = GRADE1; break;
	case 8 : GRADE = GRADE2; break;
	case 7: GRADE = GRADE3; break;
	default: GRADE = GRADE4; 
	}
	printf("����: %d\n", iTotal);
	printf("���: %.1f\n", dAvg);
	printf("���: %d���\n", GRADE);
}
