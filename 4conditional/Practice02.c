/*
	홀수 짝수 판별기
		2로 나눴을 때 나머지가 0이면 짝수, 1이면 홀수이다.
		0은 나눴을 때 짝수로 판별 되지만 0은 0입니다 가 출력되도록 코드를 작성 

	[출력결과]
	정수를 입력해주세요 : 0
	입력하신 0은(는) 0입니다.

	정수를 입력해주세요 : 1
	입력하신 1은(는) 홀수입니다.
*/

#include <stdio.h>

void main() {

	int iNumber;
	printf("정수를 입력해주세요: ");
	scanf("%d", &iNumber);

	if (iNumber == 0) {
		printf("입력하신 %d는 0입니다.", iNumber);
	}
	else if(iNumber%2==0){
		
		printf("입력하신 %d는 짝수입니다.", iNumber);
	}
	else {
		printf("입력하신 %d는 홀수입니다.", iNumber);
	}


}




/*
{
	int iNumber;

	printf("정수를 입력해주세요: ");
	scanf("%d", &iNumber);

	if (iNumber== 0) {
		printf("입력하신 %d은(는) 0입니다", iNumber);
	}
	else if (iNumber % 2 == 0) {
		printf("입력하신 %d은(는) 짝수입니다.", iNumber);
	}

	else {
		printf("입력하신 %d은(는) 홀수입니다.", iNumber);

	}

}*/