#include <stdio.h>

// [선언]
int GetSum(int iNum); //선언이므로 세미콜론 필요

void main() 
{
	int iInput = 0;
	printf("숫자를 입력하세요: ");
	scanf("%d", &iInput);

	printf("1~%d까지의 합 : %d\n", iInput, GetSum(iInput));

	printf("1~10까지의 합: %d\n", GetSum(10));
	printf("1~20까지의 합: %d\n", GetSum(20));
	printf("1~30까지의 합: %d\n", GetSum(30));
	//똑같은 코드가 여러 번 호출된다. (필요한 값만 변경해서)
}

//[정의]
// 기능: 1부터 전달된 1개의 숫자까지의 합을 구해서 반환
int GetSum(int iNum)
{
	int i = 0;
	int iSum = 0;

	for (i = 1; i <= iNum; i++)	// 1 ~ iNum까지 1씩 증가하면서
	{
		iSum += i;  // 누적
	}
	return iSum;
}