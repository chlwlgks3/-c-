/*
	Ȧ�� ¦�� �Ǻ���
		2�� ������ �� �������� 0�̸� ¦��, 1�̸� Ȧ���̴�.
		0�� ������ �� ¦���� �Ǻ� ������ 0�� 0�Դϴ� �� ��µǵ��� �ڵ带 �ۼ� 

	[��°��]
	������ �Է����ּ��� : 0
	�Է��Ͻ� 0��(��) 0�Դϴ�.

	������ �Է����ּ��� : 1
	�Է��Ͻ� 1��(��) Ȧ���Դϴ�.
*/

#include <stdio.h>

void main() {

	int iNumber;
	printf("������ �Է����ּ���: ");
	scanf("%d", &iNumber);

	if (iNumber == 0) {
		printf("�Է��Ͻ� %d�� 0�Դϴ�.", iNumber);
	}
	else if(iNumber%2==0){
		
		printf("�Է��Ͻ� %d�� ¦���Դϴ�.", iNumber);
	}
	else {
		printf("�Է��Ͻ� %d�� Ȧ���Դϴ�.", iNumber);
	}


}




/*
{
	int iNumber;

	printf("������ �Է����ּ���: ");
	scanf("%d", &iNumber);

	if (iNumber== 0) {
		printf("�Է��Ͻ� %d��(��) 0�Դϴ�", iNumber);
	}
	else if (iNumber % 2 == 0) {
		printf("�Է��Ͻ� %d��(��) ¦���Դϴ�.", iNumber);
	}

	else {
		printf("�Է��Ͻ� %d��(��) Ȧ���Դϴ�.", iNumber);

	}

}*/