/*
	05 프로젝트 - Practice03.c 참고

	구구단의 결과 값을 2차원배열에 저장 후 출력하기

		1. 저장하는 for문
				i, j를 이용하여 배열에 값 저장하기 (출력 X)

		2. 출력하는 for문
				printf("%2d * %2d = %2d\t", i, j, arr[i][j]);
				이런 형태로 i,j 와 배열의 값을 사용하여 출력하기
				(위 코드가 정답은 아님)
*/

#include <stdio.h>

void main()
{
	int iArrGugu[8][9] = {0, };
	int i = 0;
	int j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 9; j++)
		{
			iArrGugu[i][j] = (i + 2) * (j + 1);
		}
	}

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 9; j++)
		{
			printf("%2d * %2d = %d\n", i + 2, j + 1, iArrGugu[i][j]);
		}
	}
}