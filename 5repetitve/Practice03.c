/*
	2��for���� �̿��� ������ ���
		printf("%d * %d = %d\t", ...... �������� ���!
	
	[��°��]
	2 * 1 = 2	2 * 2 = 4	....
	3 * 1 = 3	3 * 2 = 6	....
	...
	9 * 1 = 9	9 * 2 = 18  ....

	[��ȭ] �Է� ���� ������ �������� ���!
*/

#include <stdio.h>

void main()
{
	int i = 0;
	int j = 0;
	int iNum = 0;
	printf("�Է¹��� �� ���� ����������մϴ�. �ڿ��� �ϳ��� �Է��ϼ���: ");
	scanf("%d", &iNum);

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= iNum; j++) 
		{
			printf("%d * %d = %d\t", i,j,i*j );
		}
	}
}





/*#include <stdio.h>

void main()
{
	int i = 0;
	int j = 0;

	for (i = 2; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%d * %d = %d\t", i, j, (i*j));
		}
	}
}

*/