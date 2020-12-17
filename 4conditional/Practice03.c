/*
	많이살 수록 할인을 많이 해줘요!!
	구매한 가격을 입력받고, 금액에 따라 할인율을 적용하자
	10000원 이상 - 5%
	50000원 이상 - 10%
	100000원 이상 - 20%

	[출력결과]
	총 구매액을 입력해주세요 : 50000
	최종 결제액은 45000원 입니다.

	총 구매액을 입력해주세요 : 5000
	최종 결제액은 5000원 입니다.
	10000원 이상 구매 시 할인되니 많이 사주세요^^ 
*/

#include <stdio.h>

void main() {
	int iBuy;
	int iFinal;

	printf("총 구매액을 입력해주세요: ");
	scanf("%d", &iBuy);

	if (iBuy >= 1000000) {
		iFinal = (int)(iBuy - 0.2*iBuy);
		printf("최종결제액은 %d원 입니다.", iFinal);

	}
	else if (iBuy >= 50000) {
		iFinal = (int)(iBuy - 0.1*iBuy);
		printf("최종결제액은 %d원 입니다.", iFinal);

	}
	else if (iBuy >= 10000) {
		iFinal = (int)(iBuy - 0.05*iBuy);
		printf("최종결제액은 %d원 입니다.", iFinal);
	}
	else {
		printf("최종결제액은 %d원 입니다.\n10000원 이상구매시 할인되니 많이 사주세요^^", iBuy);
	}



}


/*
{
	int iBuy;
	float iFinal, iRate;

	printf("총구매액을 입력해주세요: ");
	scanf("%d", &iBuy);

	if (iBuy >= 1000000)
	{
		
			printf("최종결제액은 %f원 입니다.",(iBuy - iBuy * 0.2));
	}
	else if (iBuy >= 50000)
	{
		
		printf("최종결제액은 %f원 입니다.", (iBuy - iBuy * 0.1));
	}
	else if ()

		printf()
	}



	

}*/