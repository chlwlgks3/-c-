#include <stdio.h>

//[����]
void Func1();
void Func2();
void Func3();


void main()
{
	// �Լ��� ȣ�� ��, �� �Լ��� ���๮���� '����'�ߴٰ�
	// ������ ������ ȣ���ߴ� ��ġ�� ���ƿ´�.
	printf("main, ����\n");//1
	Func1();//2 //11
	printf("main, ��\n");

	//�ڵ��� ����
	//main -> f1 -> f2 -> f3 -> f2 -> f1 -> main
}

//[����]
void Func1()
{
	printf("Func1, ����\n");//3
	Func2();//4
	printf("Func1, ��\n");//10
}
void Func2()
{
	printf("Func2, ����\n");//5
	Func3();//6
	printf("Func2, ��\n");//9
}
void Func3()
{
	printf("Func3, ����\n");//7
	printf("Func3, ��\n");//8
}