/*
	재귀호출
		-재귀함수

		-함수의 수행문 안에서 '자기 자신' 함수를 다시 호출하는 것 (재귀호출)
		   >재귀호출을 하는 함수를 재귀함수라고 한다.
		
		-반복문과 유사한 성격

		-함수는 호출되면 '스택(Stack)'이라는 메모리를 사용한다.
			Stack: First In, Last Out(FILO)  -- 우물형태 (한 쪽이 막혔다.)
			Queue: First In, First Out(FIFO) -- 양쪽이 뚫렸다.

			>너무 많은 반복 호출은 오류가 발생한다.
			(Stack Overflow 스택 메모리 초과오류)
			>메모리 공간을 반복 사용하기 때문에, 반복문보다 속도가 느리다.
			>수행이 끝나고 돌아와야할 위치를 기억한다.
*/

#include <stdio.h>


//[선언]
void fn(int iNum);



void main()
{
	printf("main 시작\n");
	fn(3);
	printf("main 끝\n");

}

//[정의]
void fn(int iNum)
{
	printf("fn 시작, iNum = %d\n", iNum);
	if (iNum == 0)
	{
		printf("fn 끝, iNum= %d부터 쭉!\n", iNum);
		return; //fn 이라는 함수의 반환타입이 void이므로 return 은 '함수종료'
	}
	fn(iNum - 1); //재귀호출: 호출을 그만할, 빠져나올 구멍필요( 이 경우 구멍은 if (iNum == 0) 이다 ) 
	printf("fn 끝, iNum = %d\n", iNum);
}

//반복문에서 쓰는게 break; 함수에서 쓰는게 return; 
	// >break;는 반복문을 빠져나가고 return;은 함수를 빠져나간다.




