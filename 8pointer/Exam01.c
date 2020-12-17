#include <stdio.h>

void main()
{
	/*
		포인터 변수의 크기는 4byte이다.
			>주소 값을 저장하는 공간
			>'주소 값'은 컴파일러/PC 환경에 따라 값의 크기가 다를 수는 있지만
			  적어도 모두 같다. (2라면 모두2, 4라면 모두4)
	*/

	char    cNum = 0;
	int     iNum = 0;
	float   fNum = 0.0f;
	double  dNum = 0.0;

	char*   pcNum = &cNum;
	int*    piNum = &iNum;
	float*  pfNum = &fNum;
	double* pdNum = &dNum;

	printf("cNum의 크기 : %d\n", sizeof(cNum));
	printf("iNum의 크기 : %d\n", sizeof(iNum));
	printf("fNum의 크기 : %d\n", sizeof(fNum));
	printf("dNum의 크기 : %d\n", sizeof(dNum));

	printf("pcNum의 크기 : %d\n", sizeof(pcNum));  //pcNum이 char 자료형으로 만들어졌지만 포인터변수이므로 포인터변수의 크기는 4byte
	printf("piNum의 크기 : %d\n", sizeof(piNum));  //	>>공간이 크든 작든 주소는 4byte
	printf("pfNum의 크기 : %d\n", sizeof(pfNum));
	printf("pdNum의 크기 : %d\n", sizeof(pdNum));
}