/*
	���ݰ���
		���ް� �ҵ漼 ������ ���ʷ� �Է� �ް�,
		������ ���� �Ǽ��ɾ��� ����ϱ�.

		[��°��]
		���ް� �ҵ漼 ������ �Է��ϼ��� : 1500000 3
		�Ǽ��ɾ��� 1455000�� �Դϴ�.
*/

#include <stdio.h>

void main()
{


		int ipay = 0;
		int ipercent = 0;

		printf("���ް� �ҵ漼 ������ �Է��ϼ��� : ");
		scanf("%d %d", &ipay, &ipercent);

		printf("�Ǽ��ɾ��� %d�� �Դϴ�.\n", (int)(ipay - (ipay * (ipercent / 100.))));
		printf("�Ǽ��ɾ��� %d�� �Դϴ�.\n", (int)(ipay * (1 - ipercent / 100.)));
	
}
