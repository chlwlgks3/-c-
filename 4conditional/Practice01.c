/*
	3과목 점수를 입력받아 평균 점수가 60점 이상이면 합격, 아니면 불합격

	[출력결과]
	점수를 차례대로 입력해주세요 : 60 60 60
	합격
*/

#include <stdio.h>

void main()
{
	int iScore1 = 0;
	int iScore2 = 0;
	int iScore3 = 0;
	int avg = 0;

	printf("점수를 차례대로 입력해주세요: ");
	scanf("%d %d %d", &iScore1, &iScore2, &iScore3);
	avg = (int)(iScore1 + iScore2 + iScore3) / 3.;

	if (avg >= 60) {
		printf("합격");
	}
	else {
		printf("불합격");
	}
	



}