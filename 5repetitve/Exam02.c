#include <stdio.h>

void main() 
{
	//continue 와 break
	int i = 0;

	//continue
	for (i = 0; i < 3; i++) //i : 0,1,2 수행 3끝
	{
		if (i == 1)
		{
			continue; // 이 순간 증감식으로 점프
			// 수행문이 끝나는 새로운 지점
		}
		printf("%d\n", i);
		//원래 수행문이 끝나는 지점

	}

	//이 순간 i의 값은 3
	printf("=====\n");

	//break

	for (i = 0; i < 3; i++)
	{
		if (i == 1)
		{
			break;
		}
		printf("%d\n", i);
	}

	printf("%d\n", i); //i 가 1일때 break를 만났으므로 이 순간 i의 값은 1

}