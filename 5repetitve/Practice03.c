/*
	2중for문을 이용한 구구단 출력
		printf("%d * %d = %d\t", ...... 형식으로 출력!
	
	[출력결과]
	2 * 1 = 2	2 * 2 = 4	....
	3 * 1 = 3	3 * 2 = 6	....
	...
	9 * 1 = 9	9 * 2 = 18  ....

	[심화] 입력 받은 수까지 구구단을 출력!
*/

#include <stdio.h>

void main()
{
	int i = 0;
	int j = 0;
	int iNum = 0;
	printf("입력받은 수 까지 구구단출력합니다. 자연수 하나를 입력하세요: ");
	scanf("%d", &iNum);

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= iNum; j++) 
		{
			printf("%d * %d = %d\t", i,j,i*j );
		}
	}
}





/*#include <stdio.h>

void main()
{
	int i = 0;
	int j = 0;

	for (i = 2; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%d * %d = %d\t", i, j, (i*j));
		}
	}
}

*/