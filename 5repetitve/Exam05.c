#include <stdio.h>

void main()
{

	int i = 0;
	int iSum = 0;

	//					������
	for (i = 10; i > 0; i--)   //10 ~1���� ����, 0�̵Ǹ� ��
	{
		printf("%d\n", i);    //1~10���� ���ڵ��� �������� ���
	}
	//���� i�� ���� 0

	while (iSum < 100)
	{
		i++;
		iSum += i;
	}
	printf("i�� %d�� ��, iSum�� 100���� Ŀ����. iSum =%d\n", i, iSum);

}