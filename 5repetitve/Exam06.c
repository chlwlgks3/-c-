#include <stdio.h>
#include <stdlib.h>   //rand()를 사용하기 위한 헤더파일(standard library)
#include <time.h>

void main()
{
	/*
		do~while문 이용한 숫자맞추기 게임

			-1~100숫자 중 랜덤으로 정답 숫자 생성
			-숫자를 입력 받아서 맞으면 종료
				입력 숫자가 더 크면 : "더 작은 수를 입력하세요"
				입력 숫자가 더 작으면 : "더 큰 수를 입력하세요"

			-정답 숫자를 맞출 때까지 반복해서 수행 (입력/비교)
			-몇 회 만에 맞췄는지도 추가로 출력
			  >정답입니다! 4회만에 정답~!
	*/
	int iAnswer = 0; //정답 숫자 변수 (랜덤)
	int i = 0;
	int input = 0;

	// rand() : 0~32767 중에 하나를 반환 (stdlib.h 필요)
	// srand() : 시드 값을 변경
	/*
	   srand()를 호출하지 않으면 시드 값이 1로 설정
	   같은 시드 값 1로 설정되기 때문에 매번 동일한 난수가 발생
	*/
	//time() : 1970.01.01자정 이후 경과시간(초)을 반환하며 오류 시 -1값을 반환
	//		   >>인자 값을 NULL값을 주면 현재 시간을 반환
	//		   >>time.h 헤더파일 필요
	srand((int)time(NULL));

	/*
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", rand());
	}
	*/

	iAnswer = rand() % 100 + 1;   //100으로 나눴을떄 0~99 가 나머지가 됨 우리는 1~100사이의 랜덤 숫자이므로 +1해준다.
	/*
	for (i = 0; i < 100; i++)
	{
		printf("%d\n", rand() % 100 + 1);
	}
	*/
	printf("관리자용 정답 숫자 공개: %d\n", iAnswer);

	do {
		printf("1~100중 한가지 입력: ");
		for (i = 1; ; i++) {
			scanf("%d", &input);
			if (input < iAnswer) {
				printf("더 큰수를 입력하세요");
			}
			else if (input > iAnswer) {
				printf("더 작은수를 입력하세요");
			}
			else {
				break;
			}
		}
	} while (input = !iAnswer);

	printf("정답입니다. %d회만에 정답", i);
}


	