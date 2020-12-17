// Exam01.c

#include <stdio.h>

void main()
{
	// if의 사용 
	int iValue = 0;

	// 1번 
	if (iValue == 0)
	{
		printf("1. iValue == 0\n");
	}

	// 2번 
	if (iValue != 0)
	{
		printf("2. iValue != 0\n");
	}

	// 3번 
	if (!(iValue == 0))
	{
		printf("3. !(iValue == 0)\n");
	}

	// 4번 
	if (!(iValue != 0))
	{
		printf("4. !(iValue != 0)\n");
	}

	//5번: 수행문의 코드가 1줄이면, {}생략가능
	if (iValue == 0)
		printf("5.iValue ==0\n");

	//6번: 수행문의 코드가 1줄이면, 같은줄에 사용해도 됨
	if (iValue != 0) printf("6.iValue != 0\n");

	//7번
	if (!(iValue != 0))
		printf("7.!(iValue !=0)\n");
	    printf("나는 7번의 수행문!\n"); //if문과는 상관없음 하지만 보통 {}써준다 헷갈림 방지를 위해 

}