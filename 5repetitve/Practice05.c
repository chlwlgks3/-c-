/*
	양의 정수를 입력받아서 
	1 : 1st
	2 : 2nd
	3 : 3rd
		그 외 : ~th
		0이하 : "다시 입력하세요."
 
	do~while과 switch~case의 콜라보

	[출력결과]
	숫자를 입력하세요 : -1
	다시 입력하세요.
	숫자를 입력하세요 : 1
	1st

	숫자를 입력하세요 : 10
	10th
*/

#include <stdio.h>

void main()
{
	int i =0;

	do
	{
		printf("숫자를 입력하세요: ");
		scanf("%d", &i);
		if (i < 0)
		{
			printf("다시 입력하세요.");
		}

		else if (i >=4)
		{
			printf("%dth\n", i);

		}
		switch (i)
		{
		case 1: printf("1st\n");
			break;
		case 2: printf("2nd\n");
			break;
		case 3: printf("3rd\n");
			break;
		}
	} while (i != 0);
} 
