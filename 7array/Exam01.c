#include<stdio.h>
#include<string.h> //���ڿ� ���� �Լ��� ���

void main()
{
	/*
		char �迭
			-char�� 1�� ���ڸ� ǥ���ϴ� �ڷ���
			-char�� �迭 ���´� '���ڿ�'�� ǥ���� �� �ִ�.
			-���ڿ��� ������ �ι��� \0�� ���ԵǾ� �ִ�. (�ڵ�)
				>���ڿ��� ���� �ǹ�
				>�ι��� ������ �迭 ���� �� ���ϴ� ���ڿ� ���̺���
				 �ּ� 1�̻� �����ְ� �����ؾ��Ѵ�.
				>�ι����� ���Զ����� �������� ���λ翡 sz�� �ٴ´�.
				  (string~zero)
	*/
	char szStr1[20] = "Hello"; //char �迭 ����� ���ÿ� �ʱ�ȭ�� �� '���ڿ�'��� ����

	char szStr2[20] = { 'H','e','l','l', 'o', }; // szStr1�� ����

	char szStr3[20] = { 0, }; //����0�� �ι���

	char szStr4[20]; //�ʱ�ȭ ���� ���� ���� �迭

	char szStr[] = "Hello World"; //���̰� �ڵ����� ������.(���⵵ �����Ͽ� 11���� + ������ �ι���\0 = 12) 

	printf("szStr�� ũ��: %d\n", sizeof(szStr)); //NULL���ڵ� �����ϹǷ� ũ��� 12�� ����

	printf("�ι��� ���ڷ� ���: [%c]\n", szStr[11]);	//������ ��µ� szStr[0]~szStr[11]���� �̹Ƿ� �������� 11�� '\0'��
	printf("�ι��� ������ ���: [%d]\n", szStr[11]);	//0�� ��µ�

	printf("������ ���ڷ� ���: [%c]\n", ' ');
	printf("������ ������ ���: [%d]\n", ' ');
	//�ι��ڴ� ���� 0�̴�.
	//������� �ٸ� ����(������ ���� 32)

	//���� �迭�� ��� ������ %s ���ڿ��� ����� �� �ִ�.
	//�� ��, %s�� �ι���(����0)�� ���� �� ���� ���ڸ� ����Ѵ�.
	printf("szStr = [%s]\n", szStr);

	szStr4[0] = 'H';
	szStr4[1] = 'e';
	szStr4[2] = 'l';
	szStr4[3] = 'l';
	szStr4[4] = 'o';
	szStr4[5] = '\0'; // szStr4[5] = 0; �ص���

	printf("szStr4 = [%s]\n", szStr4);

	// ���ڹ迭�� ���ڿ� ����
	// szStr4 = "Hello World"; //�Ұ��� 
	//���ڿ��� �����ϴ� ������ �迭 ���� �ÿ��� ���� ���� �� ���� �Ұ����ϴ�.

	//���ڿ��� �迭�� �����Ϸ��� ���ڿ� ���� �Լ��� ����ؾ� �Ѵ�.

	// strcpy(����� �迭��, "������ ���ڿ�");   ----> string.h �ʿ�
	strcpy(szStr4, "Hello World");
	printf("szStr4 = [%s]\n", szStr4);

	strcpy(szStr4, szStr); // <<�̰͵� ������.

}
