#include <stdio.h>

#define MULTIPLY(a,b) (a*b)

void main()
{
	float f = 100 / MULTIPLY(2 + 3, 4 + 5);
	//		100/	2+3*4+5=19   =5.26  --> ����/���� �̹Ƿ� �ڵ�����ȯ �Ǿ� 5.26�� �ƴ϶� 5�� ���� 100�̳� MUL �տ� (float)���̸� �Ҽ�������
	printf("%f\n", f);
}