#include <stdio.h>

void main()
{
	//2���� ���ڹ迭�� �����̸� �Է¹ޱ�

	char szArrAnimal[3][20] = { 0, }; //20���� ���ڿ��� 3��
	int i = 0;
	int iArrLen = 0;
	//				20ĭ *3�� = 60byte / 1�� ���� ũ��(20byte) -->3 (���ǰ���)
	iArrLen = sizeof(szArrAnimal) / sizeof(szArrAnimal[0]);
	//       1���� : iArr[1]   --->2��° ���
	//		 2���� : iArr[1][1] -->1��,1�� ��� 1��
	//		 2�����ε� iArr[1] ó�� �Ѱ��� ���� -->1�� ��ü �ǹ� 

	printf("���� �̸� �Է�\n");
	for (i = 0; i < iArrLen; i++)
	{
		printf("%d�� ���� : ", (i + 1));
		gets(szArrAnimal[i]); // �� �� ��ü�� �ǹ� = 1���� ���ڹ迭�� ����.
	}

	for (i = 0; i < iArrLen; i++)
	{
		printf("%d�� ������ %s�Դϴ�.\n", (i + 1), szArrAnimal[i]);
	}
}