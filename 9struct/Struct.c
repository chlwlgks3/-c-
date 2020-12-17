    /*
		구조체 - 사용자 정의 자료형(type)
			-다양한 타입의 변수들을 묶은 자료형
				> 배열(array) : '같은 타입' 변수들의 나열
				> 구조체 : '여러 타입' 변수들의 나열

			-구조체는 미리 선언하고 사용한다.
				>함수 선언부 위 (함수 원형에서 사용할 수 있기 때문에)
				>구조체 선언 = 새로운 자료형 만들었다.

			-구조체 멤버로 배열, 포인터, 다른 구조체 등도 사용할 수 있다.
				>변수화 가능한 모든 것

			-구조체 변수는 멤버들을 묶은 '단위'이다.
				>일반 변수처럼 사용할 수 있다.
	*/

#include <stdio.h>
#include <string.h>	//strcpy() 함수 사용을 위해

// (1) 구조체의 기본 선언
struct STUDENT
{
	// 구조체가 가질 멤버 선언
	char   szName[20];	    //학생 이름
	int	   iAge;			//학생 나이
	double dGrade;		    //학생 점수
	// 구조체 멤버 선언 시에는 초기화를 할 수 없다.
	// 이 때는 공간이 만들어지는게 아님(이런 자료형이 있다고 선언만 할 뿐)
	// 구조체를 이용해서 변수를 만들 때, 공간이 생성, 그 때 초기화 진행
	//STUDENT 라는 구조체 부를 때 마다 (20+4+8)byte 공간이 만들어짐  
};

typedef struct _EMPLOYEE	//_EMPLOYEE 사용하지 않을 이름이라서 그냥 _ 붙임(필수아님)
{
	char szName[20];	//사원이름
	int iAge;			//사원나이
	int iSalary;		//사원월급
}EMPLOYEE;

typedef int KOREAIS_INT; // int를 KOREAIS_INT로 사용할 수 있다.
// int와 KOREAIS_INT는 같다.

void main()
{
	//(1) 구조체를 사용하면 학생 10명일 때, 구조체 변수 10개면 된다.
	struct STUDENT skim1;	//STUDENT 자료형으로 만든 변수(초기화 되지 않음) ->32byte공간이 만들어지고 안에는 쓰레기값 초기화안했으므로
	struct STUDENT skim2 = { 0, };	//초기화 (배열과 동일)
	struct STUDENT sLee = { "이몽룡, 20 , 99.9" };	// 멤버 타입 순서에 맞게 초기값 
													// szName[20]에 '이몽룡'가 들어가고 iAge 에는 20 dGrade에는 99.9 가 들어감
	// (2) 구조체를 사용하지 않았다면, 각각의 변수를 10개씩 만들어야한다.
	char szName1[20]; //학생1 이름
	int iAge1;	//학생1 나이
	double dGrade1; //학생1 점수

	char szName2[20]; //학생2 이름	
	int iAge2;
	double dGrade2;  
	//		->이렇게 하면 총 30개가 필요하지만 구조체사용하면 10개만 있으면 됨.


	//	(3) typedef를 이용한 struct 떼기
	EMPLOYEE sHong = { 0, };
	struct _EMPLOYEE sHong2 = { 0, };	// _EMPLOYEE를 사용할 수도 있음

	EMPLOYEE* pHong = NULL; //구조체는 단지 자료형이기 때문에 포인터변수도 사용가능

	pHong = &sHong;

	//구조체 변수명에서 점(.)을 붙이면 구조체 멤버에 접근(사용)할 수 있다.
	sHong.iAge = 20;
	sHong.iSalary = 2000000;
	//sHong.szName = "홍길동";    ->szName은 문자 배열 -> 배열은 변경 불가능
	strcpy(sHong.szName, "홍길동");

	printf("이름 : %s\n", sHong.szName);
	printf("나이 : %d세\n", sHong.iAge);
	printf("월급 : %d원\n", sHong.iSalary);

	// 구조체의 포인터 변수로 멤버를 접근할 때는 점(.)대신 '->' 기호사용 
	pHong->iAge = 21;	// sHong 구조체를 따라가서 멤버를 사용
	pHong->iSalary = 25000000;

	printf("이름 : %s\n", pHong->szName);
	printf("나이 : %d세\n", (*pHong).iAge);  // *pHong와 sHong 은 같기 때문에 점(.)사용 가능
	printf("월급 : %d원\n", sHong.iSalary);
	// 함수 안에서 함수 외부의 구조체에 접근할 때 포인터 변수 사용, 이 때 ->사용

}