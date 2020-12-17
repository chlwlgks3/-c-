/*
	1부터 입력받은 수까지 짝수들의 합을 구하기

	[출력결과]
	숫자를 입력하세요 : 10
	1~10까지 짝수의 합은 30입니다.
*/
#include <stdio.h>

void main()
{
	int iNum = 0;
	int i = 0;
	int iSum = 0;
	printf("숫자를 입력하세요: ");
	scanf("%d", &iNum);

	for (i = 0; i <= iNum; i++)
	{
		if (i % 2 == 1)
		{
			continue;
		}
		iSum += i;
	}
	printf("1~%d까지 짝수의 합은 %d입니다.", iNum, iSum);

}
/*
	int iNum =0;
	int i=0;
	int iSum=0;

	printf("숫자를 입력하세요: ");
	scanf("%d", &iNum);

	for(i=1;i<=iNum;i++)
	{
		if (i % 2==0)
		{
			iSum +=i;
		}

	}
	printf("1~%d까지 짝수의 합은 %d입니다\n." , iNum , iSum);


*/