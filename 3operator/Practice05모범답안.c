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
	int iNum = 0; 

	printf("숫자를 입력하세요 : ");
	scanf("%d", &iNum);

	printf("%s\n", iNum > 0 ? "양수" : (iNum < 0 ? "음수" : "0"));
}