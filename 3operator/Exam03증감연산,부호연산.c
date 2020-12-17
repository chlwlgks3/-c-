#include <stdio.h>

void main() {
	/*
	    단항 연산자 
		   -항이 하나 밖에없다.(피연산자가 1개)

		   1.증감연산자 ++, --
		     피연산자의 값을 1증가(++) 또는 1감소(--)

		   2.부호연산자
		     피연산자의 값에 부호 적용(-)

	*/


	int iNum1 = 10;
	int iNum2 = -10; //-기호가 부호연산자(10을 음수로 만들어서 iNum2에 대입)
	int iNum3 = 0;
	
	printf("iNum1++ = %d\n", iNum1++); // 후위증감
	printf("iNum= %d\n", iNum1);
	printf("++iNum1= %d\n",++iNum1); //전위증감
	//후위증감 : 피연산자를 사용한뒤 값을 증감(나중에 증감) 
	//전위증감: 피연산자의 값을 증감한뒤 사용(먼저 증감)

	iNum3 = iNum1++;
	printf("iNum3 = %d\n", iNum3);
	printf("iNum1 = %d\n", iNum1);
	

	//부호연산자
	printf("iNum2 = %d\n", iNum2);
	printf("-iNum2 = %d\n", -iNum2); //부호연산 사용
	printf("iNum2 = %d\n", iNum2);
	
	

	//*중요*
	//증감연산자는 피연산자의 값을 실제로 변경시킨다.
	//부호연산자를 포함한 일반적인 연산자들은 피연산자의 값을 가져가서 사용만 해서 결과 값을 얻어낸다.
}