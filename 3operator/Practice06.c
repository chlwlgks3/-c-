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
	int iApple;
	int iBucketSize;
	

	printf("����� ������ �ٱ����� ũ�⸦ ���ʴ�� �Է��Ͻÿ�: ");
	scanf("%d %d" ,&iApple, &iBucketSize);
	printf("%d���� ����� ��� ���� %d���� �ٱ��ϰ� �ʿ��մϴ�" ,iApple , iApple % iBucketSize ==0 ? iApple/iBucketSize : iApple/iBucketSize + 1);



}