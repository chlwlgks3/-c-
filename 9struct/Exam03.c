/*
	열거형 ( enumeration )
		-'정수'를 미리 열거해놓은 자료형
		-가독성 향상 용도로 쓰임
		-기본값 0 (값을 지정하지 않았을 때)
		-값이 지정되지 않으면 앞의 숫자보다 1증가
		-원하는 정수를 어느 위치던 대입할 수 있다.
		-항목이름이 중복되면 안된다.
*/

#include <stdio.h>

enum ENUM1 { A1, B1, C1, D1, E1 };
enum ENUM2 { A2 = 1, B2 , C2=-200, D2, E2};

enum _LANGUAGE
{
	LANGUAGE_C = 1,
	LANGUAGE_JAVA,
	LANGUAGE_PYTHON
};

void main()
{
	int iNum = A1; // 열거형 문자 자체가 정수가 된다. (정수한테 이름을 부여)

	printf("%d %d %d %d %d\n", A2, B2, C2, D2, E2);

	printf("=================================\n");
	printf("[재미있는 프로그래밍~~!]\n");
	printf("1.C언어\n");
	printf("2.JAVA\n");
	printf("3.PYTHON\n");
	printf("=================================\n");

	printf("공부할 언어를 입력하세요: ");
	scanf("%d", &iNum);

	switch (iNum)
	{
	case LANGUAGE_C:
		printf("C언어\n");
		break;
	case LANGUAGE_JAVA:
		printf("JAVA\n");
		break;
	case LANGUAGE_PYTHON:
		printf("PYTHON\n");
		break;
	}
	// case 1,2,3 써있으면 무엇을 의미하는지 코드를 다시 찾아봐야 한다.
}