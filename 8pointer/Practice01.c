#include <stdio.h>

void main()
{
	int iValue = 0;
	int* pValue = &iValue;

	// pValue�� �̿��Ͽ� �ڵ� �ϼ��ϱ�
	printf("���� �Է� : ");
	scanf("%d", pValue);
	
	printf("�Է��� ���� 2������ %d �Դϴ�.\n", (*pValue)*(*pValue));
}