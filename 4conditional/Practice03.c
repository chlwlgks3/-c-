/*
	���̻� ���� ������ ���� �����!!
	������ ������ �Է¹ް�, �ݾ׿� ���� �������� ��������
	10000�� �̻� - 5%
	50000�� �̻� - 10%
	100000�� �̻� - 20%

	[��°��]
	�� ���ž��� �Է����ּ��� : 50000
	���� �������� 45000�� �Դϴ�.

	�� ���ž��� �Է����ּ��� : 5000
	���� �������� 5000�� �Դϴ�.
	10000�� �̻� ���� �� ���εǴ� ���� ���ּ���^^ 
*/

#include <stdio.h>

void main() {
	int iBuy;
	int iFinal;

	printf("�� ���ž��� �Է����ּ���: ");
	scanf("%d", &iBuy);

	if (iBuy >= 1000000) {
		iFinal = (int)(iBuy - 0.2*iBuy);
		printf("������������ %d�� �Դϴ�.", iFinal);

	}
	else if (iBuy >= 50000) {
		iFinal = (int)(iBuy - 0.1*iBuy);
		printf("������������ %d�� �Դϴ�.", iFinal);

	}
	else if (iBuy >= 10000) {
		iFinal = (int)(iBuy - 0.05*iBuy);
		printf("������������ %d�� �Դϴ�.", iFinal);
	}
	else {
		printf("������������ %d�� �Դϴ�.\n10000�� �̻󱸸Ž� ���εǴ� ���� ���ּ���^^", iBuy);
	}



}


/*
{
	int iBuy;
	float iFinal, iRate;

	printf("�ѱ��ž��� �Է����ּ���: ");
	scanf("%d", &iBuy);

	if (iBuy >= 1000000)
	{
		
			printf("������������ %f�� �Դϴ�.",(iBuy - iBuy * 0.2));
	}
	else if (iBuy >= 50000)
	{
		
		printf("������������ %f�� �Դϴ�.", (iBuy - iBuy * 0.1));
	}
	else if ()

		printf()
	}



	

}*/