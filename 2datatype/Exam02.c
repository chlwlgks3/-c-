// Exam02.c

#include <stdio.h>

void main()
{
	// 2. �Ǽ��� (�Ҽ�)
	float  fValue = 2.2f; // �Ǽ� ����� ǥ���� �� f�� ���̸� float�� �ȴ�. 
	double dValue = -3.36666666666; // �ƹ��͵� ������ ������ �⺻�� double 

	printf("fValue = %f\n", fValue); // �⺻ �Ҽ��� 6��° �ڸ����� ���
	printf("dValue = %f\n", dValue); // �ڵ� �ݿø� 

	printf("dValue : %.2f\n", dValue); // [.m] : �Ҽ��� ���� 
	printf("dValue = %.7f\n", dValue);
	printf("fValue = %.3f\n", fValue);

}
