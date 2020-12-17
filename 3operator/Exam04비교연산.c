#include <stdio.h>

void main()
{
	/* 
	    비교 연산자
		    -조건문 , 반복문의 '조건식'에서 사용
			-조건만족 : 정수1반환 (참) --->True
			-조건만족x : 정수0반환 (거짓) --->False
			   >c언어에서 0이 아닌 모든 값을 '참'으로 간주
			   >1이 참을 의미하는 대표적인 값

			   1.등가비교 : 두값이 같은지 다른지 비교 ==     !=
			   2.대소비교 : 두값의 크기 비교  >    <		>=		<=
	*/

	int iNum1 = 5;
	int iNum2 = 5;
	//등가비교
	printf("iNum1 == iNum2 : %d\n", (iNum1 == iNum2)); //같으면 1
	printf("iNum1 != iNum2 : %d\n", (iNum1 != iNum2)); //서로다르면 1

	//대소비교
	printf("iNum1 > iNum2 : %d\n", (iNum1 > iNum2)); //크냐 (초과)
	printf("iNum1 < iNum2: %d\n", (iNum1 < iNum2));  //작냐 (미만)
	printf("iNum1 >= iNum2: %d\n", (iNum1 >= iNum2)); //이상
	printf("iNum1 <= iNum2: %d\n", (iNum1 <= iNum2)); //이하


}