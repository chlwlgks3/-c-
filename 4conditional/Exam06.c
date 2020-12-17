// Exam06.c

#include <stdio.h>

void main()
{
	/*
		2. switch ~ case 문
			- 하나의 조건으로 많은 경우의 수를 처리
				1.  조건식의 결과는 '정수'만 허용(연산 가능)
				2. case문의 값은 '정수 상수'만 가능하며, 중복 불가

			- break;
				> switch문을 빠져나간다.(탈출)
				> case를 만족하고 수행을 했는데, break;가 없으면
				  그 아래 있는 모든 case는 만족한 것으로 간주하고 다 수행
				  (break;를 만나거나 switch 가 끝날 때 까지)
	*/

	int iNum = 0;

	printf("==========================================\n");
	printf("[재미있는 프로그래밍~~!]\n");
	printf("1. C언어\n");
	printf("2. JAVA\n");
	printf("3. PYTHON\n");
	printf("==========================================\n");

	printf("공부할 언어를 입력하세요 : ");
	scanf("%d", &iNum);

	switch (iNum) // 조건식(연산 가능)
	{
	case 1: // iNum이 1이면, if (iNum == 1)
		printf("C언어~~~!\n");
		break;
	case 2:	// iNum이 2이면, else if (iNum == 2)
		printf("JAVA~~!\n");
		break;
	case 3: // iNum이 3이면, else if (iNum == 3)
		printf("PYTHON~~!\n");
		break;
	case 4:

	default : // else 
		printf("잘못 입력하였습니다. %d\n", iNum);
	}

	// 위 switch ~ case문을 if문으로 변경 

	if (iNum == 1)
	{
		printf("C언어~~!\n");
	}
	else if (iNum == 2)
	{
		printf("JAVA~~!\n");
	}
	else if (iNum == 3)
	{
		printf("PYTHON~~!\n");
	}
	else
	{
		printf("잘못 입력하였습니다. %d\n", iNum);
	}
}