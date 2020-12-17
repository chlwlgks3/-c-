/*
	3명의 학생 정보를 입력 받고 출력하기
		- 학생 정보
			이름
			나이
			전화번호 (문자열)
			과목1 점수
			과목2 점수
			과목3 점수
		- 등급
			> 평균 점수 90점 이상 1, 80점 이상 2, 70점 이상 3, 나머지 4
		- 학생 정보 입력 받는 함수 : InputStudent()
		- 학생 정보 출력하는 함수 : PrintStudent()
		- 열거형 (enum) 사용 -> GRADE = { GRADE1, GRADE2, ...

[출력결과]
	[1번 학생 정보 입력]
	이름 : 홍길동
	나이 : 20
	번호 : 010-2233-4455
	점수1 : 100
	점수2 : 90
	점수3 : 91
	...

	[홍길동 학생의 정보]
	나이 : 20세
	번호 : 010-2233-4455
	총점 : 281
	평균 : 93.7
	등급 : 1등급
*/

#include <stdio.h>

enum _GRADE {
	GRADE_1 = 1,
	GRADE_2,
	GRADE_3,
	GRADE_4
};

typedef struct _STUDENT
{
	char	szName[20];
	int		iAge;
	char	szNum[20];
	int		iArrScore[3];
} STUDENT;

void InputStudent( STUDENT* pStudent, int iNum );
void PrintStudent( STUDENT* pStudent );

void main()
{
	STUDENT sStudent[3] = {0, };
	int i = 0;

	for ( i = 0; i < 3; i++ )
	{
		InputStudent( &sStudent[i], (i+1) );
	}
	
	for ( i = 0; i < 3; i++ )
	{
		PrintStudent( &sStudent[i] );
	}
}

void InputStudent(STUDENT* pStudent, int iNum)
{
	printf("[%d번 학생 정보 입력]\n", iNum);
	printf("이름 : ");
	scanf("%s", &pStudent->szName);
	printf("나이 : ");
	scanf("%d", &pStudent->iAge);
	printf("번호 : ");
	scanf("%s", &pStudent->szNum);
	printf("과목1 : ");
	scanf("%d", &pStudent->iArrScore[0]);
	printf("과목2 : ");
	scanf("%d", &pStudent->iArrScore[1]);
	printf("과목3 : ");
	scanf("%d", &pStudent->iArrScore[2]);
}

void PrintStudent(STUDENT* pStudent)
{
	int		iTotal		= 0;
	double	dAverage	= 0;

	iTotal		= pStudent->iArrScore[0] + pStudent->iArrScore[1] + pStudent->iArrScore[2];
	dAverage	= iTotal/3.;

	printf("[%s 학생의 정보]\n", pStudent->szName);
	printf("나이 : %d세\n", pStudent->iAge);
	printf("번호 : %s\n", pStudent->szNum);
	printf("총점 : %d점\n", iTotal);
	printf("평균 : %.1f점\n", dAverage);
	
	switch( (int)dAverage/10 )
	{
	case 10:
	case 9:
		printf("등급 : %d등급\n", GRADE_1);
		break;
	case 8:
		printf("등급 : %d등급\n", GRADE_2);
		break;
	case 7:
		printf("등급 : %d등급\n", GRADE_3);
		break;
	default :
		printf("등급 : %d등급\n", GRADE_4);
	}

	printf("=======================\n");
}
