#include <stdio.h>

//[선언]
void Func1();
void Func2();
void Func3();


void main()
{
	// 함수는 호출 시, 그 함수의 수행문으로 '점프'했다가
	// 수행이 끝나면 호출했던 위치로 돌아온다.
	printf("main, 시작\n");//1
	Func1();//2 //11
	printf("main, 끝\n");

	//코드의 흐흠
	//main -> f1 -> f2 -> f3 -> f2 -> f1 -> main
}

//[정의]
void Func1()
{
	printf("Func1, 시작\n");//3
	Func2();//4
	printf("Func1, 끝\n");//10
}
void Func2()
{
	printf("Func2, 시작\n");//5
	Func3();//6
	printf("Func2, 끝\n");//9
}
void Func3()
{
	printf("Func3, 시작\n");//7
	printf("Func3, 끝\n");//8
}