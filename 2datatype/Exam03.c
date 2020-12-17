# include <stdio.h>

void main() {



	/*
	3. 진수표현
	10진수 : 그냥 쓴다.
	8진수 : 숫자앞에 0을 붙인다.
	16진수:숫자앞에 0x를 붙인다.
	  > 서식문자 옵션에 #을 사용하면, 어떤진수인지 함께 출력된다
	*/

	int iValue1 = 10; //10
	int iValue2 = 010; //8
	int iValue3 = 0x10;//16
	

	printf("iValue1 = %d\n", iValue1);
	printf("iValue2= %d\n", iValue2);
	printf("iValue3= %d\n", iValue3);

	printf("iValue1 =%o\n", iValue1);
	printf("iValue2=%o\n", iValue2);
	printf("iValue3=%#o\n", iValue3);

		printf("iValue1=%x\n", iValue1);
		printf("iValue2=%x\n", iValue2);
		printf("iValue3=%#x\n", iValue3);


		int iValue4 = 16;
		printf("iValue4=%#x\n", iValue4);
	
		
	

}