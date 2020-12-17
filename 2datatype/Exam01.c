//Exam01.c
/*
		하나의 프로젝트에는 하나의 main()만 존재할수있다.

		소스파일을 추가하면서 공부할때는, 나머지 소스파일들은 '빌드에서 제외'시킨다.
		   1.소스파일 우클릭-속성-'빌드에서 제외'항목 '예'
		   2.해당 소스파일은 아이콘에 빨간 동그라미가 생김
		   3.수행시키고 싶은 main()함수가 있는 소스파일을 제외하고 나머진 제외시킴 
		   
*/

#include <stdio.h>

void main()
{
	/*
             1.정수형
			     -char 자료형은 정수형이지만, '1개문자'를 표현할 떄 사용한다.
				     >1개 문자는 작은따옴표로 묶는다.
					 >정수를 '아스키코드표'에 맞는 문자로 변환하여 표시한다.
					      아스키코드표: 문자를 표현하기 위한 코드체계

	*/

	char cValue = 'A'; //'A'문자를 대입하면 실제 cValue에는 정수65가 저장된다.(아스키코드표에 따라서)
	int iValue = 65;


	printf("cValue 문자:%c\n", cValue);
	printf("cValue 정수:%d\n", cValue);
	printf("iValue 문자:%c\n", iValue);
	printf("iValue 정수:%d\n", iValue);
	//printf()의 서식문자 옵션
	printf("[%d]\n", iValue);
	printf("[%5d]\n", iValue); //[n]:자리수 지정(n만큼 공간확보)) , 우측정렬
	printf("[%-5d]\n", iValue);//[-]:자리수 지정시, 좌측정렬
	printf("[%05d]\n", iValue);//[0]:자리수 지정시, 빈 자리를 0으로 채움
	printf("%03d\n", iValue); 
	


} 