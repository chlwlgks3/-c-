/*
	회원 등급에 따라 권한 출력하기
		switch~case문 사용
			3등급 - 삭제,쓰기,읽기
			2등급 - 쓰기,읽기
			1등급 - 읽기

	[출력결과]
	당신의 회원등급을 입력해주세요 : 2
	쓰기권한 부여
	읽기권한 부여
*/

#include <stdio.h>

void main()
{
	int iNum = 0; 

	printf("당신의 회원등급을 입력해주세요 : ");
	scanf("%d", &iNum);

	switch (iNum)
	{
	case 3:
		printf("삭제권한 부여\n");
	case 2:
		printf("쓰기권한 부여\n");
	case 1:
		printf("읽기권한 부여\n");
		break;
	default :
		printf("잘못 입력하였습니다.\n");
	}
}