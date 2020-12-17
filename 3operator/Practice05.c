/*
	정수 판별기
		숫자를 입력 받고, 그 숫자가 양수,음수,0 인지 출력하기

		[출력결과]
		숫자를 입력하세요 : 10
		양수
*/

#include <stdio.h>

void main()
{
	float iNum;
	
	printf("숫자를 입력하세요: ");
	scanf("%f", &iNum);
    printf("%s\n", iNum > 0 ? "양수입니다" : (iNum == 0 ? "0 입니다" : "음수입니다"));
	
}