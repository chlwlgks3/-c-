/*
	�� ����� �� ���� �ٱ��Ͽ�??
		- 1���� �ٱ��Ͽ��� 10���� ����� ���� �� �ִ�.
		- ����, ���� ���� ����� 142���� ���� 15���� �ٱ��ϰ� �ʿ��ϴ�.
		- �ٱ��� ������ ���ϴ� �ڵ带 �ۼ��ϼ���.  		

		���׿����� ����ϱ�
		hint. �������� ������ �� ����� ����..!

		int iApple = 142;
		int iBucektSize = 10;
		
		[��°��]
		142���� ����� ��� ���� 15���� �ٱ��ϰ� �ʿ��մϴ�.
*/

#include <stdio.h>

void main()
{
	int iApple		= 142;
	int iBucektSize = 10;
	int iBucektNum	= 0;

	iBucektNum = (iApple % iBucektSize ? 1 : 0) + (iApple / iBucektSize);
	printf("%d���� ����� ��� ���� %d���� �ٱ��ϰ� �ʿ��մϴ�.\n", iApple, iBucektNum);
}