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

enum GRADE { GRADE1=1, GRADE2, GRADE3, GRADE4 };

typedef struct _STUDENT {
	char name[20];
	int age;
	char num[20];
	int Score[3];
}STUDENT;

void InputStudent(STUDENT* pStudent, int iNum);
void PrintStudent(STUDENT* pStudent);


int main(void) {
	STUDENT Student[3] = { 0, };
	for (int i = 0; i < 3; i++) {
		InputStudent(&Student[i], i + 1);
	}

	for (int i = 0; i < 3; i++) {
		PrintStudent(&Student[i]);
	}
}

void InputStudent(STUDENT* pStudent,int iNum) {
	printf("[%d번 학생 정보 입력]\n", iNum);
	printf("이름: ");
	scanf("%s", &pStudent->name);
	printf("나이: ");
	scanf("%d", &pStudent->age);
	printf("번호: ");
	scanf("%s", &pStudent->num);
	printf("점수1: ");
	scanf("%d", &pStudent->Score[0]);
	printf("점수2: ");
	scanf("%d", &pStudent->Score[1]);
	printf("점수3: ");
	scanf("%d", &pStudent->Score[2]);
}

void PrintStudent(STUDENT* pStudent) {
	printf("[%s 학생의 정보]\n", pStudent->name);
	printf("나이: %d세\n", pStudent->age);
	printf("번호: %s\n", pStudent->num);
	int iTotal = 0;
	double dAvg = 0.0;
	int GRADE = 0;
	for (int i = 0; i < 3; i++) {
		iTotal += pStudent->Score[i];
	}
	dAvg = iTotal / 3. ;
	switch ((int) dAvg / 10){
	case 10 :
	case 9 : GRADE = GRADE1; break;
	case 8 : GRADE = GRADE2; break;
	case 7: GRADE = GRADE3; break;
	default: GRADE = GRADE4; 
	}
	printf("총점: %d\n", iTotal);
	printf("평균: %.1f\n", dAvg);
	printf("등급: %d등급\n", GRADE);
}
