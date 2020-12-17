/*
	국어,영어,수학 세 과목의 점수를 입력 받고,
	총점과 평균을 출력하세요. (평균은 소수점 이하 1자리까지)
	
	[출력결과]
	국어,영어,수학 점수를 차례로 입력하세요 : 97 86 95
	총점 : 278점
	평균 : 92.7점
*/

#include <stdio.h>

void main()
{
	int iKor = 0; 
	int iEng = 0;
	int iMath = 0;
	int iTotal = 0;

	printf("국어,영어,수학 점수를 차례로 입력하세요 : ");
	scanf("%d %d %d", &iKor, &iEng, &iMath);
	iTotal = iKor + iEng + iMath;

	printf("총점 : %d점\n", iTotal);
	printf("평균 : %.1f점\n", iTotal/3.);
}