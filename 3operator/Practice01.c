/*
	2���� ���ڸ� �Է� �ް� ��Ģ����� ������ ����� ����ϼ���.

	[��°��]
	�� �� �Է� : 20 6
	20 + 6 = 26
	20 - 6 = 14
	20 * 6 = 120
	20 / 6 = 3
	20 % 6 = 2
*/

#include <stdio.h>

void main() {
	int iNum1;
	int iNum2;

	printf("�μ��� �Է��ϼ���: ");
	scanf("%d %d", &iNum1, &iNum2);
	printf("%d + %d = %d\n", iNum1, iNum2, (iNum1 + iNum2));
	printf("%d - %d = %d\n", iNum1, iNum2, (iNum1 - iNum2));
	printf("%d *%d= %d\n", iNum1, iNum2, (iNum1*iNum2));
	printf("%d / %d = %d\n", iNum1, iNum2, (iNum1 / iNum2));
	printf("%d %% %d = %d\n", iNum1, iNum2, (iNum1%iNum2));

}