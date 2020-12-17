#include<stdio.h>

void main()
{
	/*
			형변환 --> 자료형의 변환
				자동 형변환
					정수 -> 실수 : 없던 소수점 생김(오차가 발생할 수 있다.)
					실수 -> 정수 : 소수점 이하 소멸(정수만 남는다.)
					큰 타입 정수 --> 작은 타입 정수

			명시적 형변환(casting)
				  (type) 을 값 앞에 명시하여 변환
				  (int)3.14 -->3


	*/
	double dNum = 123; // int -->double 자동형변환 
	int    iNum = 129.123; // double -->int자동 형변환
	char   cNum = iNum;    // int -->char

	printf("dNum = %f\n", dNum);
	printf("iNum= %d\n", iNum);
	printf("cNum= %d\n", cNum); //-127이라는 이상한 값이 출력된다. (이유: char 는 1byte 로 표현가능범위가 -127 ~ 128 까지 밖에안되서)

	//다른 자료형끼리 연산을 할 경우, 크기가 큰 자료형으로 변환된다.
	printf("5 + 3.14 = %f\n", (5 + 3.14)); // int(4) + double (8) = double(8)
	printf("5 + 3.14 = %d\n", (int)(5 + 3.14)); //(int)8.14 -->8
	printf("5 + 3.14 = %f\n", (int)5 + 3.14); //(int)5 + 3.14 = double 8.14

}