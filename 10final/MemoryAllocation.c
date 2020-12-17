/*
	메모리 동적할당
		- 정적할당 : 일반 변수나 배열(코드에 공간의 크기 고정)
			>우리가 여태 사용하던 방식

		- 동적할당 : 함수를 이용하여 '런타임' 도중 원하는 크기의 메모리 할당
			>런타임    : 프로그램 실행 중
			>malloc() : 메모리 할당(공간을 만든다.)
			>free()   : 할당된 메모리 해제(공간 삭제)

		- 정적할당은 기본적으로 자동 소멸이 된다. (지역변수 : 지역이 끝나면 소멸)

		- malloc()으로 동적할당한 공간은 자동 소멸이 되지 않는다.
		  반드시 malloc()으로 할당한 공간은 사용을 다 한 뒤, free()로 삭제
*/

#include <stdio.h>
#include <stdlib.h> // malloc() 함수 사용하기 위한 헤더파일
#include <string.h> // memset() 함수 사용하기 위한 헤더파일

void main()
{
	// 3개 과목의 점수를 입력받고, 총점과 평균을 출력하는 프로그램 (정적할당)
	//--> 과목의 개수를 입력받아서 유동적으로 공간을 만들도록 수정 (동적할당)

	/* 정적할당 코드
	int iArrScore[3] = { 0, };
	int iTotalScore = 0;
	int i = 0;
	
	printf("3개의 과목 점수 입력: ");
	// 입력받는 for문
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &iArrScore[i]);
	}
	// 총점 누적하는 for문
	for (i = 0; i < 3; i++)
	{
		iTotalScore += iArrScore[i];
	}
	printf("총점 : %d점\n", iTotalScore);
	printf("평균:  %.1f점\n", iTotalScore / 3.); // 3.으로 나눈거랑 3.0으로 나눈거랑 똑같음 0생략
	*/
	
	//동적할당 코드
	int iCount = 0;
	int* pArrScore = NULL;	//동적할당에 필요한 포인터 변수
	int iTotalScore = 0;
	int i = 0;


	printf("입력할 과목의 수 : ");
	scanf("%d", &iCount);

	pArrScore = (int* )malloc(iCount * sizeof(int));
	// malloc()은 공간을 만든뒤, 그 공간을 사용할 수 있도록 만든 공간의 시작주소 값을 '반환'해준다. (return)
	// 반환 값을 대입받은 포인터의 타입은 malloc()기준에서 모르기 때문에 
	// 우리가 사용할 포인터의 타입으로 '형변환'을 해줘야 한다.

	{
		char* pFileText = NULL;
		int iTextLen = 1000;
		pFileText = (char*)malloc(iTextLen * sizeof(char) + 1); //맨 뒤에 널문자가 있음을 고려하여 할당할 때 +1 해준다.
		free(pFileText);
	}
	//동적할당하고 나서 하나 빠진게 있음 -> '초기화'
	//우리가 직접 초기화를 할 수 있는 함수

	//memset(값을 세팅할 주소, 세팅할 값, 크기); --> string.h 헤더파일 필요
	memset(pArrScore, 0, iCount * sizeof(int));

	//동적할당 + 초기화까지 완료가 되면 우리는 포인터변수를 배열처럼 쓸 수 있다.

	printf("%d개 과목 점수 입력: ", iCount);

	//입력받는 for문
	for (i = 0; i < iCount; i++)
	{
		scanf("%d", &pArrScore[i]);
	}

	//총점 누적하는 for문
	for (i = 0; i < iCount; i++)
	{
		iTotalScore += pArrScore[i];
	}
	free(pArrScore);
	//해제하고 나면 pArrScore는 사용할 수 없다.
	printf("총점 : %d점\n", iTotalScore);
	printf("평균 : %.1f점\n", (float)iTotalScore / iCount);   //(float)(iTotalScore/iCount)하면 만들어진 정수에 float하는것이므로 X 둘중 하나앞에해야함

}