//입력된 점수에 따라 학점 출력 
// 100점 (만점)A학점(if문의중첩)    , 90~99 : A학점 , 80~89:B학점 , 70~79 : C학점 , 70미만:F학점 ,
//0점:(빵점)F학점(if문의중첩)


#include <stdio.h>

void main(){
		int iScore = 0;
		printf("점수입력: ");
		scanf("%d", &iScore);



		if (iScore >= 90) //90이상
		{
			if (iScore == 100)
			{
				printf("(만점)");
			}
			printf("A학점\n");
		}

		else if (iScore >= 80)
		{
			printf("B학점\n");
		}
		else if (iScore >= 70)
		{
			printf("C학점\n");
		}
		else {
			if (iScore == 0)
			{
				printf("(빵점)");
			}
			printf("F학점\n");
		}
}

/* void main() {

	int iScore = 0;
	printf("점수입력: ");
	scanf("%d", &iScore);

	if (iScore >= 90) {
		if (iScore == 100) {
			printf("(만점)");
		}

		printf("A학점");
	}
	else if (iScore >= 80) {
		printf("B학점");
	}
	else if (iScore >= 70) {
		printf("C학점");
	}
	else if (iScore < 70) {
		if (iScore == 0) {
			printf("(빵점)");
		}
		printf("F학점");
	}


} */