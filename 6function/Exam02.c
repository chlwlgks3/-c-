#include <stdio.h>

//[선언]

int Add(int iNum1, int iNum2);
int Sub(int iNum1, int iNum2);
void Mul(int iNum1, int iNum2);
void Div(int iNum1, int iNum2);

void main()
{
	/*
		사칙연산을 하는 함수 선언/정의 후 main()에서 호출
			>덧셈,뺄셈,곱셈,나눗셈 4개함수
			>매개변수나 반환타입은 자유롭게
			>단, 연산은 함수 내부에서 수행해야함

		[출력결과]
		두 수 입력:20 6
		20 + 6 =26
		20 - 6 =14
		20 * 6 =120
		20 / 6 =3
	*/

	int iNum1 = 0;
	int iNum2 = 0;
	printf("두 수 입력: ");
	scanf("%d %d", &iNum1, &iNum2);

	printf("%d + %d = %d\n", iNum1, iNum2, Add(iNum1, iNum2));
	printf("%d - %d = %d\n", iNum1, iNum2, Sub(iNum1, iNum2));
	Mul(iNum1, iNum2);
	Div(iNum1, iNum2);



}

int Add(int iNum1, int iNum2)
{
	return(iNum1 + iNum2);
}

int Sub(int iNum1, int iNum2)
{
	return(iNum1 - iNum2);
}

void Mul(int iNum1, int iNum2)
{
	printf("%d * %d = %d\n", iNum1 , iNum2, (iNum1 * iNum2));
}

void Div(int iNum1, int iNum2)
{
	printf("%d / %d = %d\n", iNum1, iNum2, (iNum1 / iNum2));
}