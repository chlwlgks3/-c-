/*
	국어,영어,수학 세 과목의 점수를 입력 받고,
	총점과 평균을 출력하세요. (평균은 소수점 이하 1자리까지)
	
	[출력결과]
	국어,영어,수학 점수를 차례로 입력하세요 : 97 86 95
	총점 : 278점
	평균 : 92.7점
*/

#include <stdio.h>

void main() {
	float kor, eng, math;
	float total;
	

	printf("국어 영어 수학 세과목의 점수를 차례로 입력하시오: ");
	scanf("%f %f %f", &kor, &eng, &math);
	total = kor + eng + math;
	printf("총점 : %.f\n평균 : %.1f", total, total/3);
	


}











































