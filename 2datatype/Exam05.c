#include <stdio.h>

void main()
{

	// 5. sizeof() --->자료의 크기를 확인하는 '연산자' (단위: 바이트)

    char cNum = 10;
	int iNum = 20;
	float fNum = 1.1f;
	double dNum = 2.2;


	int iCharSiz = sizeof(char); // 결과 값이 정수라서 대입가능.
	// 자료의 크기를 byte 단위로 알려준다.
	//sizeof()는 '정수'로 크기가 반환된다. --->결과는 정수이다.

	printf("char의 크기: %d\n", sizeof(char)); //자료형명
	printf("cNum의 크기: %d\n", sizeof(cNum)); //변수명
	printf("10의 크기: %d\n", sizeof(10)); //정수 상수는 int이다.
	printf("int의 크기: %d\n", sizeof(int)); //자료형명 
	printf("iNum의 크기:%d\n", sizeof(iNum)); //변수명

	printf("float의 크기:%d\n", sizeof(float));
	printf("double의 크기:%d\n", sizeof(double));
	printf("1.1f의크기:%d\n", sizeof(1.1f));   //f가 붙으면 float
	printf("1.1의 크기:%d\n", sizeof(1.1));     //실수 상수는 double

	printf("%f\n", (5 + 3.3));

	//실제로는 변수공간이 만들어지는 것 처럼 
	//5(int 4byte)의 공간과, 3.3의 공간(double 8byte)이 임시로 만들어져서 
	//8.3의 결과를 만든 후 이 결과도 임의의 공간에 저장되었다가
	//%f에 사용되고 사라진다.

}