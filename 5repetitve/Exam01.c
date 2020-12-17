#include <stdio.h>

void main()
{
	//for문을 이용하여 1~10까지 합 구하기

	int i = 0;//1~10까지 반복할 변수(조건변수)
	int iSum = 0;//합을 누적할 변수

	for (i = 1; i<=10; i++) // i :1~10 수행, 11끝
	{
		iSum += i; // iSum = iSum + i;
		/*
					iSum = 0 + i;
					iSum = (0+1)+2;
					iSum = (0+1+2)+3;
					iSum = (0+1+2+3)+4;
					iSum = (0+1+2+3+4)+5;
					....
					iSum = (0+1+2+3+4+5+6+7+8+9)+10;
		*/
		//조건변수i의 값을 사용
		printf("%d\n",iSum);
	}
	printf("1~10까지의 합은 %d입니다.\n", iSum);


}
/*
int i =0;
int iSum=0;

for(i=1;i<=10;i++)
{
iSum += i;
printf("%d\n",iSum);
}

*/