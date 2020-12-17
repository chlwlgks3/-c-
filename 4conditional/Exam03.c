

#include <stdio.h>

void main()
{
	//if, else if, else 사용
	int iNum = 0;
	printf("숫자입력: ");
	scanf("%d", &iNum);

	//입력된 정수가 양/0/음 판별

	if (iNum > 0)
	{
		printf("양수\n");
	}

	else if (iNum < 0)
	{
		printf("음수\n");
	}
	else if (iNum == 0) //비교연산수행을 해야한다. (cpu사용)
	{
		printf("0이다\n");
	}
	else //경우의 수가 어차피 3개라서 굳이 else if로 식을 만들 필요가없다. (효율성을 위해서 else if 대신 else사용해준다.)

	{
		printf("0이다\n");
	}




}