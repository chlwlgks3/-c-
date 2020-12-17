#include <stdio.h>

void main()
{
	/*
		문자열 입출력 함수
			gets, puts
	*/

	char szAddr[40] = { 0, };
	/*
	printf("주소를 입력하세요: ");
	scanf("%s", szAddr); // 이 때는 &가 필요없다. 
	//&를 사용한다 는 것은 공간의 주소값이 필요하다는 것인데 
	//배열명은 그 자체가 배열의 첫 번째 요소의 주소값이다.

	printf("주소는 %s입니다.\n", szAddr);
	// scanf()는 공백(띄어쓰기)로 값을 구분한다.
	//공백이 포함된 문자열은 %s로 저장하기가 힘들다.
	*/

	printf("주소를 입력하세요: ");
	gets(szAddr); // 입력받을 배열의 시작 주소
				  // 줄바꿈(엔터)키를 입력할 때까지 1줄을 그대로 읽어온다. ->띄어쓰기를 입력받고 싶을 때 scanf대신에 gets를 사용한다.
	puts(szAddr); // puts는 자동으로 개행까지 한다. -> puts대신에 printf해도 됨 딱히 메리트 없다.
	printf("주소는 %s입니다.\n", szAddr);

}