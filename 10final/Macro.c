/*
	선행처리 
		- 컴파일 이전에 하는 일
		- #define 매크로
			>단순 치환하기
			>특정 패턴일 때 변경하기(매크로확장)
*/

#include <stdio.h>

#define PI  3.141592    // 단순치환(가독성 + 중복코드제거)
#define SQUARE(X) X * X // 매크로확장(마치 함수 같다.)
#define SQUARE2(X) ((X) * (X)) //매크로확장(연산을 대비하여 소괄호로 묶어준다.)

#define NUM_INT 0	
void main()
{
	int iNum = NUM_INT;
	printf("파이는 %f입니다.\n", PI);
	//PI는 컴파일 시 3.14로 치환된 상태로 컴파일이 된다.
	printf("파이는 %f입니다.\n", PI);

	printf("SQUARE의 결과 : %d\n", SQUARE(5)); 
	// 컴파일 시 SQUARE(5)는 5*5로 치환된다.
	// 만약 함수였으면 5*5의 결과인 25가 반환이 된다.
	// 매크로 : 코드만 바꿔치기

	printf("SQUARE의 결과: %f\n", SQUARE(2.5));
	// 코드가 2.5*2.5 로 치환이 된다.
	// 만약 함수였으면, 매개변수가 위에꺼(5)는 int, 아래꺼(2.5)는 float 이나 double 이어야 한다.

	printf("SQUARE의 결과 : %d\n", SQUARE(1 + 3));
	// 단순치환 이므로 1+3이 X의 값
	// X * X = 1 + 3 * 1 + 3 이므로 *이 연산순위가 더 높으므로 7이 됨.

	printf("SQUARE2의 결과 : %d\n", SQUARE2(1 + 3));
	// ((1+3) * (1+3)) 으로 치환 따라서 16 이 출력됨

}