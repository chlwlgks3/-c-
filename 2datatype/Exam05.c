#include <stdio.h>

void main()
{

	// 5. sizeof() --->�ڷ��� ũ�⸦ Ȯ���ϴ� '������' (����: ����Ʈ)

    char cNum = 10;
	int iNum = 20;
	float fNum = 1.1f;
	double dNum = 2.2;


	int iCharSiz = sizeof(char); // ��� ���� ������ ���԰���.
	// �ڷ��� ũ�⸦ byte ������ �˷��ش�.
	//sizeof()�� '����'�� ũ�Ⱑ ��ȯ�ȴ�. --->����� �����̴�.

	printf("char�� ũ��: %d\n", sizeof(char)); //�ڷ�����
	printf("cNum�� ũ��: %d\n", sizeof(cNum)); //������
	printf("10�� ũ��: %d\n", sizeof(10)); //���� ����� int�̴�.
	printf("int�� ũ��: %d\n", sizeof(int)); //�ڷ����� 
	printf("iNum�� ũ��:%d\n", sizeof(iNum)); //������

	printf("float�� ũ��:%d\n", sizeof(float));
	printf("double�� ũ��:%d\n", sizeof(double));
	printf("1.1f��ũ��:%d\n", sizeof(1.1f));   //f�� ������ float
	printf("1.1�� ũ��:%d\n", sizeof(1.1));     //�Ǽ� ����� double

	printf("%f\n", (5 + 3.3));

	//�����δ� ���������� ��������� �� ó�� 
	//5(int 4byte)�� ������, 3.3�� ����(double 8byte)�� �ӽ÷� ��������� 
	//8.3�� ����� ���� �� �� ����� ������ ������ ����Ǿ��ٰ�
	//%f�� ���ǰ� �������.

}