#include <stdio.h>

void main()
{
	/* 
	    �� ������
		    -���ǹ� , �ݺ����� '���ǽ�'���� ���
			-���Ǹ��� : ����1��ȯ (��) --->True
			-���Ǹ���x : ����0��ȯ (����) --->False
			   >c���� 0�� �ƴ� ��� ���� '��'���� ����
			   >1�� ���� �ǹ��ϴ� ��ǥ���� ��

			   1.��� : �ΰ��� ������ �ٸ��� �� ==     !=
			   2.��Һ� : �ΰ��� ũ�� ��  >    <		>=		<=
	*/

	int iNum1 = 5;
	int iNum2 = 5;
	//���
	printf("iNum1 == iNum2 : %d\n", (iNum1 == iNum2)); //������ 1
	printf("iNum1 != iNum2 : %d\n", (iNum1 != iNum2)); //���δٸ��� 1

	//��Һ�
	printf("iNum1 > iNum2 : %d\n", (iNum1 > iNum2)); //ũ�� (�ʰ�)
	printf("iNum1 < iNum2: %d\n", (iNum1 < iNum2));  //�۳� (�̸�)
	printf("iNum1 >= iNum2: %d\n", (iNum1 >= iNum2)); //�̻�
	printf("iNum1 <= iNum2: %d\n", (iNum1 <= iNum2)); //����


}