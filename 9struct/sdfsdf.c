/*
typedef struct _EMPLOYEE
{
	char szName[20];
	int  iAge;
	int  iSalary;
}EMPLOYEE;

void main()
{
	EMPLOYEE sHan = { "�Ѽ���", 20 , 2000000 };
	EMPLOYEE sArrEmp[5] = { 0, };	//28 * 5 = 140byte
	EMPLOYEE sArrEmp2[2] = { {"ȫ�浿" , 20, 2000000},
							{"�Ӳ���" , 30, 5000000} };

	// �迭 �� ��° ���(����ü)�� iAge ���� ����
	sArrEmp2[1].iAge = 20;
	printf("�̸� : %s\n", sArrEmp2[1].szName);
	printf("���� : %d��\n", sArrEmp2[1].iAge);
	printf("���� : %d��\n", sArrEmp2[1].iSalary);  //�ι�° ����� �̸� ���� ���� ... ù��° ����� �̸� ���� ������ sArrEmp2[0].~
}
*/

#include <stdio.h>
#include <string.h>

typedef struct _EMPLOYEE
{	
	char szName[20];
	int iAge;
	int iSalary;
}EMPLOYEE;

void main() {
	EMPLOYEE sHan = { "�Ѽ���", 20, 200000 };
	EMPLOYEE sArrEmp[5] = { 0, };
	EMPLOYEE sArrEmp2[2] = { {"ȫ�浿", 20 ,200000},
							{"�Ӳ���",30,222222} };

	//sArrEmp2 �迭�� �ι�° ���(����ü)�� szName ���� ���� 

	strcpy(sArrEmp2[1].szName, "�̼���");

	printf("�̸�: %s\n", sArrEmp2[1].szName);
	printf("����: %d\n", sArrEmp2[1].iAge);
	printf("����: %d\n", sArrEmp2[1].iSalary);


}