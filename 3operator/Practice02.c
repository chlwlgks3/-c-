/*
	세금계산기
		월급과 소득세 비율을 차례로 입력 받고,
		세금을 제한 실수령액을 출력하기.

		[출력결과]
		월급과 소득세 비율을 입력하세요 : 1500000 3
		실수령액은 1455000원 입니다.
*/


#include <stdio.h>

void main() {

	float income=0, rate=0;

	printf("월급과 소득세 비율을 입력하세요: ");
	scanf("%f %f", &income, &rate);
	printf("실수령액은 %.f원 입니다", (income-0.01*rate*income));

}