/*
	내 사과는 몇 개의 바구니에??
		- 1개의 바구니에는 10개의 사과를 담을 수 있다.
		- 만약, 내가 가진 사과가 142개일 때는 15개의 바구니가 필요하다.
		- 바구니 개수를 구하는 코드를 작성하세요.  		

		삼항연산자 사용하기
		hint. 나머지를 구했을 때 결과에 따라..!

		int iApple = 142;
		int iBucektSize = 10;
		
		[출력결과]
		142개의 사과를 담기 위해 15개의 바구니가 필요합니다.
*/

#include <stdio.h>

void main()
{
	int iApple;
	int iBucketSize;
	

	printf("사과의 갯수와 바구니의 크기를 차례대로 입력하시오: ");
	scanf("%d %d" ,&iApple, &iBucketSize);
	printf("%d개의 사과를 담기 위해 %d개의 바구니가 필요합니다" ,iApple , iApple % iBucketSize ==0 ? iApple/iBucketSize : iApple/iBucketSize + 1);



}