#include <stdio.h>

void main()
{
	/*
		������ ������ ũ��� 4byte�̴�.
			>�ּ� ���� �����ϴ� ����
			>'�ּ� ��'�� �����Ϸ�/PC ȯ�濡 ���� ���� ũ�Ⱑ �ٸ� ���� ������
			  ��� ��� ����. (2��� ���2, 4��� ���4)
	*/

	char    cNum = 0;
	int     iNum = 0;
	float   fNum = 0.0f;
	double  dNum = 0.0;

	char*   pcNum = &cNum;
	int*    piNum = &iNum;
	float*  pfNum = &fNum;
	double* pdNum = &dNum;

	printf("cNum�� ũ�� : %d\n", sizeof(cNum));
	printf("iNum�� ũ�� : %d\n", sizeof(iNum));
	printf("fNum�� ũ�� : %d\n", sizeof(fNum));
	printf("dNum�� ũ�� : %d\n", sizeof(dNum));

	printf("pcNum�� ũ�� : %d\n", sizeof(pcNum));  //pcNum�� char �ڷ������� ����������� �����ͺ����̹Ƿ� �����ͺ����� ũ��� 4byte
	printf("piNum�� ũ�� : %d\n", sizeof(piNum));  //	>>������ ũ�� �۵� �ּҴ� 4byte
	printf("pfNum�� ũ�� : %d\n", sizeof(pfNum));
	printf("pdNum�� ũ�� : %d\n", sizeof(pdNum));
}