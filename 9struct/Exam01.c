// 구조체 안에 구조체
// 매개변수로 사용

#include <stdio.h>

typedef struct _POINT
{
	int x;
	int y;
}POINT;

//구조체 안에 다른 구조체를 멤버로 가지려면, 그 구조체가 더 위에 미리 선언되어야한다.
typedef struct _CIRCLE
{
	POINT sPoint;	 // (좌표)원점
	int	  iLen;		 // 반지름
}CIRCLE;

//[선언]
void SetCircleVal(CIRCLE sCircle);
void SetCircleRef(CIRCLE* pCircle);	//CIRCLE 타입 변수의 주소 값을 전달받겠다.

void main()
{
	POINT sPoint = { 0, }; //POINT가 CIRCLE안에 있다고 해서 사용 못하는게 아님
	CIRCLE c1 = { 0, };
	CIRCLE c2 = { 0, };
	CIRCLE c3 = { 0, };

	printf("c1의 크기 : %d\n", sizeof(c1));

	// 구조체의 멤버가 구조체일 때, 또 점(.)을 찍고 접근한다.
	printf("c1 좌표 : (%d,%d), 반지름 : %d\n", c1.sPoint.x, c1.sPoint.y, c1.iLen);
	SetCircleVal(c1);	// Call by Value
	printf("c1 좌표 : (%d,%d), 반지름 : %d\n", c1.sPoint.x, c1.sPoint.y, c1.iLen); //함수의 매개변수가 포인터변수 가 아니므로 실제로 값이 변하지않음. 함수호출후 소멸!
	SetCircleRef(&c1); //매개변수가 포인터변수이므로 c1의 주소값 전달
	printf("c1 좌표 : (%d,%d), 반지름 : %d\n", c1.sPoint.x, c1.sPoint.y, c1.iLen);

	//구조체 변수의 값 복사
	c2.iLen = c1.iLen;
	c2.sPoint.x = c1.sPoint.x;
	c2.sPoint.y = c1.sPoint.y;

	c3 = c1; //자료형이 CIRCLE로 같기 때문에 가능

	//if ( c1 == c3 ) {} 불가능 : 우리가 정의한 자료형이기 때문에 어떻게 비교할지 모른다.

}
/*
	SetCircleVal 사용 시 호출할 때 마다 12byte 공간이 생성 (매개변수 타입이 CIRCLE 12byte)
		>구조체의 크기가 크면 그 크기만큼 생성
		>많이 호출 할 수록 프로그램이 힘들어 한다.

	SetCircleRef 사용 시 호출할 때 마다 4byte 공간이 생성(매개변수가 포인터 변수 4byte)
		>구조체의 크기와 상관없이 무조건 4byte
*/


//[정의]
void SetCircleVal(CIRCLE sCircle)	// 함수 호출 시 12byte짜리 CIRCLE 공간이 새로 생성
{
	sCircle.sPoint.x = 3;
	sCircle.sPoint.y = 4;
	sCircle.iLen = 5;
}

void SetCircleRef(CIRCLE* pCircle)
{
	//pCircle은 구조체의 포인터 변수 : 해당주소의 멤버 접근시 -> 사용
	//멤버를 접근했더니 sPoint가 있다. 포인터 변수가 아니라서 점(.)을 사용

	pCircle->sPoint.x = 5;
	pCircle->sPoint.y = 6;
	pCircle->iLen = 10;
}