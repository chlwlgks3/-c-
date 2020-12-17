#include <stdio.h>

void main() {
	/*
          복합대입연산자
		      > 대입연산자(=)에 다른 연산자가 합쳐진것
	*/

	int iNum = 10;
	
	iNum += 5; //iNum = iNum+5; 와 똑같은 코드
	
	printf("iNum = %d\n", iNum);
	// -=	+=	 *=	  /=  등등 가능
}