#include <stdio.h>

void Fn(int* pNum1, int* pNum2);

void main()
{
	int i = 5;
	int j = 2;
	Fn(&i, &j);
	printf("i = %d\nj = %d", i, j);
}


void Fn(int* pNum1, int* pNum2)
{
	int iTemp = 0;
	iTemp = *pNum1;
	*pNum1 = *pNum2;
	*pNum2 = iTemp;
}