#include <stdio.h>

void main()
{
	//2차원 문자배열로 동물이름 입력받기

	char szArrAnimal[3][20] = { 0, }; //20글자 문자열이 3개
	int i = 0;
	int iArrLen = 0;
	//				20칸 *3개 = 60byte / 1개 행의 크기(20byte) -->3 (행의개수)
	iArrLen = sizeof(szArrAnimal) / sizeof(szArrAnimal[0]);
	//       1차원 : iArr[1]   --->2번째 요소
	//		 2차원 : iArr[1][1] -->1행,1열 요소 1개
	//		 2차원인데 iArr[1] 처럼 한개를 쓰면 -->1행 전체 의미 

	printf("동물 이름 입력\n");
	for (i = 0; i < iArrLen; i++)
	{
		printf("%d번 동물 : ", (i + 1));
		gets(szArrAnimal[i]); // 한 행 전체를 의미 = 1차원 문자배열과 같다.
	}

	for (i = 0; i < iArrLen; i++)
	{
		printf("%d번 동물은 %s입니다.\n", (i + 1), szArrAnimal[i]);
	}
}