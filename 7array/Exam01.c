#include<stdio.h>
#include<string.h> //문자열 관련 함수를 사용

void main()
{
	/*
		char 배열
			-char는 1개 문자를 표현하는 자료형
			-char의 배열 형태는 '문자열'을 표현할 수 있다.
			-문자열의 끝에는 널문자 \0이 삽입되어 있다. (자동)
				>문자열의 끝을 의미
				>널문자 때문에 배열 선언 시 원하는 문자열 길이보다
				 최소 1이상 여유있게 선언해야한다.
				>널문자의 포함때문에 변수명의 접두사에 sz가 붙는다.
				  (string~zero)
	*/
	char szStr1[20] = "Hello"; //char 배열 선언과 동시에 초기화할 때 '문자열'사용 가능

	char szStr2[20] = { 'H','e','l','l', 'o', }; // szStr1과 동일

	char szStr3[20] = { 0, }; //정수0은 널문자

	char szStr4[20]; //초기화 하지 않은 문자 배열

	char szStr[] = "Hello World"; //길이가 자동으로 잡힌다.(띄어쓰기도 포함하여 11글자 + 마지막 널문자\0 = 12) 

	printf("szStr의 크기: %d\n", sizeof(szStr)); //NULL문자도 포함하므로 크기는 12가 나옴

	printf("널문자 문자로 출력: [%c]\n", szStr[11]);	//공백이 출력됨 szStr[0]~szStr[11]까지 이므로 마지막인 11은 '\0'임
	printf("널문자 정수로 출력: [%d]\n", szStr[11]);	//0이 출력됨

	printf("공백을 문자로 출력: [%c]\n", ' ');
	printf("공백을 정수로 출력: [%d]\n", ' ');
	//널문자는 정수 0이다.
	//공백과는 다른 문자(공백은 정수 32)

	//문자 배열의 모든 내용은 %s 문자열로 출력할 수 있다.
	//이 때, %s는 널문자(정수0)을 만날 때 까지 글자를 출력한다.
	printf("szStr = [%s]\n", szStr);

	szStr4[0] = 'H';
	szStr4[1] = 'e';
	szStr4[2] = 'l';
	szStr4[3] = 'l';
	szStr4[4] = 'o';
	szStr4[5] = '\0'; // szStr4[5] = 0; 해도됨

	printf("szStr4 = [%s]\n", szStr4);

	// 문자배열에 문자열 대입
	// szStr4 = "Hello World"; //불가능 
	//문자열을 대입하는 행위는 배열 생성 시에만 가능 수정 할 때는 불가능하다.

	//문자열을 배열에 대입하려면 문자열 관련 함수를 사용해야 한다.

	// strcpy(저장될 배열명, "저장할 문자열");   ----> string.h 필요
	strcpy(szStr4, "Hello World");
	printf("szStr4 = [%s]\n", szStr4);

	strcpy(szStr4, szStr); // <<이것도 가능함.

}

