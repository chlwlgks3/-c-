#include <stdio.h>

//[����]

int Add(int iNum1, int iNum2);
int Sub(int iNum1, int iNum2);
void Mul(int iNum1, int iNum2);
void Div(int iNum1, int iNum2);

void main()
{
	/*
		��Ģ������ �ϴ� �Լ� ����/���� �� main()���� ȣ��
			>����,����,����,������ 4���Լ�
			>�Ű������� ��ȯŸ���� �����Ӱ�
			>��, ������ �Լ� ���ο��� �����ؾ���

		[��°��]
		�� �� �Է�:20 6
		20 + 6 =26
		20 - 6 =14
		20 * 6 =120
		20 / 6 =3
	*/

	int iNum1 = 0;
	int iNum2 = 0;
	printf("�� �� �Է�: ");
	scanf("%d %d", &iNum1, &iNum2);

	printf("%d + %d = %d\n", iNum1, iNum2, Add(iNum1, iNum2));
	printf("%d - %d = %d\n", iNum1, iNum2, Sub(iNum1, iNum2));
	Mul(iNum1, iNum2);
	Div(iNum1, iNum2);



}

int Add(int iNum1, int iNum2)
{
	return(iNum1 + iNum2);
}

int Sub(int iNum1, int iNum2)
{
	return(iNum1 - iNum2);
}

void Mul(int iNum1, int iNum2)
{
	printf("%d * %d = %d\n", iNum1 , iNum2, (iNum1 * iNum2));
}

void Div(int iNum1, int iNum2)
{
	printf("%d / %d = %d\n", iNum1, iNum2, (iNum1 / iNum2));
}