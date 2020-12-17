/*
	Exam05 의 성적 판별을 switch~case 문으로!!
		1. 숫자버리기 예제 방법을 활용
		2. (정수 / 정수) 의 결과 활용! case 10:부터  ~ defalut:까지
*/

#include <stdio.h>

void main()
{
	int iScore = 0;
	printf("점수 입력 : ");
	scanf("%d", &iScore);

	switch (iScore / 10)
	{
	case 10:
		printf("(만점)A학점\n");
		break;
	case 9: 
		printf("A학점\n");
		break;
	case 8:
		printf("B학점\n");
		break;
	case 7:
		printf("C학점\n");
		break;

	default :
		if (iScore == 0)
		{
			printf("(빵점)");
		}
		printf("F학점\n");
	}
}