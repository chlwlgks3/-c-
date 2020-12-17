#include <stdio.h>

void main()
{

	int i = 0;
	int iSum = 0;

	//					증감식
	for (i = 10; i > 0; i--)   //10 ~1까지 수행, 0이되면 끝
	{
		printf("%d\n", i);    //1~10까지 숫자들을 역순으로 출력
	}
	//현재 i의 값은 0

	while (iSum < 100)
	{
		i++;
		iSum += i;
	}
	printf("i가 %d일 떄, iSum은 100보다 커졌다. iSum =%d\n", i, iSum);

}