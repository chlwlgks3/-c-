/*
	�޸� �����Ҵ�
		- �����Ҵ� : �Ϲ� ������ �迭(�ڵ忡 ������ ũ�� ����)
			>�츮�� ���� ����ϴ� ���

		- �����Ҵ� : �Լ��� �̿��Ͽ� '��Ÿ��' ���� ���ϴ� ũ���� �޸� �Ҵ�
			>��Ÿ��    : ���α׷� ���� ��
			>malloc() : �޸� �Ҵ�(������ �����.)
			>free()   : �Ҵ�� �޸� ����(���� ����)

		- �����Ҵ��� �⺻������ �ڵ� �Ҹ��� �ȴ�. (�������� : ������ ������ �Ҹ�)

		- malloc()���� �����Ҵ��� ������ �ڵ� �Ҹ��� ���� �ʴ´�.
		  �ݵ�� malloc()���� �Ҵ��� ������ ����� �� �� ��, free()�� ����
*/

#include <stdio.h>
#include <stdlib.h> // malloc() �Լ� ����ϱ� ���� �������
#include <string.h> // memset() �Լ� ����ϱ� ���� �������

void main()
{
	// 3�� ������ ������ �Է¹ް�, ������ ����� ����ϴ� ���α׷� (�����Ҵ�)
	//--> ������ ������ �Է¹޾Ƽ� ���������� ������ ���鵵�� ���� (�����Ҵ�)

	/* �����Ҵ� �ڵ�
	int iArrScore[3] = { 0, };
	int iTotalScore = 0;
	int i = 0;
	
	printf("3���� ���� ���� �Է�: ");
	// �Է¹޴� for��
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &iArrScore[i]);
	}
	// ���� �����ϴ� for��
	for (i = 0; i < 3; i++)
	{
		iTotalScore += iArrScore[i];
	}
	printf("���� : %d��\n", iTotalScore);
	printf("���:  %.1f��\n", iTotalScore / 3.); // 3.���� �����Ŷ� 3.0���� �����Ŷ� �Ȱ��� 0����
	*/
	
	//�����Ҵ� �ڵ�
	int iCount = 0;
	int* pArrScore = NULL;	//�����Ҵ翡 �ʿ��� ������ ����
	int iTotalScore = 0;
	int i = 0;


	printf("�Է��� ������ �� : ");
	scanf("%d", &iCount);

	pArrScore = (int* )malloc(iCount * sizeof(int));
	// malloc()�� ������ �����, �� ������ ����� �� �ֵ��� ���� ������ �����ּ� ���� '��ȯ'���ش�. (return)
	// ��ȯ ���� ���Թ��� �������� Ÿ���� malloc()���ؿ��� �𸣱� ������ 
	// �츮�� ����� �������� Ÿ������ '����ȯ'�� ����� �Ѵ�.

	{
		char* pFileText = NULL;
		int iTextLen = 1000;
		pFileText = (char*)malloc(iTextLen * sizeof(char) + 1); //�� �ڿ� �ι��ڰ� ������ ����Ͽ� �Ҵ��� �� +1 ���ش�.
		free(pFileText);
	}
	//�����Ҵ��ϰ� ���� �ϳ� ������ ���� -> '�ʱ�ȭ'
	//�츮�� ���� �ʱ�ȭ�� �� �� �ִ� �Լ�

	//memset(���� ������ �ּ�, ������ ��, ũ��); --> string.h ������� �ʿ�
	memset(pArrScore, 0, iCount * sizeof(int));

	//�����Ҵ� + �ʱ�ȭ���� �Ϸᰡ �Ǹ� �츮�� �����ͺ����� �迭ó�� �� �� �ִ�.

	printf("%d�� ���� ���� �Է�: ", iCount);

	//�Է¹޴� for��
	for (i = 0; i < iCount; i++)
	{
		scanf("%d", &pArrScore[i]);
	}

	//���� �����ϴ� for��
	for (i = 0; i < iCount; i++)
	{
		iTotalScore += pArrScore[i];
	}
	free(pArrScore);
	//�����ϰ� ���� pArrScore�� ����� �� ����.
	printf("���� : %d��\n", iTotalScore);
	printf("��� : %.1f��\n", (float)iTotalScore / iCount);   //(float)(iTotalScore/iCount)�ϸ� ������� ������ float�ϴ°��̹Ƿ� X ���� �ϳ��տ��ؾ���

}