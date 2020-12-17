/*
typedef struct _EMPLOYEE
{
	char szName[20];
	int  iAge;
	int  iSalary;
}EMPLOYEE;

void main()
{
	EMPLOYEE sHan = { "한석봉", 20 , 2000000 };
	EMPLOYEE sArrEmp[5] = { 0, };	//28 * 5 = 140byte
	EMPLOYEE sArrEmp2[2] = { {"홍길동" , 20, 2000000},
							{"임꺽정" , 30, 5000000} };

	// 배열 두 번째 요소(구조체)의 iAge 값을 변경
	sArrEmp2[1].iAge = 20;
	printf("이름 : %s\n", sArrEmp2[1].szName);
	printf("나이 : %d세\n", sArrEmp2[1].iAge);
	printf("월급 : %d원\n", sArrEmp2[1].iSalary);  //두번째 요소의 이름 나이 월급 ... 첫번째 요소의 이름 나이 월급은 sArrEmp2[0].~
}
*/

#include <stdio.h>
#include <string.h>

typedef struct _EMPLOYEE
{	
	char szName[20];
	int iAge;
	int iSalary;
}EMPLOYEE;

void main() {
	EMPLOYEE sHan = { "한석봉", 20, 200000 };
	EMPLOYEE sArrEmp[5] = { 0, };
	EMPLOYEE sArrEmp2[2] = { {"홍길동", 20 ,200000},
							{"임꺽정",30,222222} };

	//sArrEmp2 배열의 두번째 요소(구조체)의 szName 값을 변경 

	strcpy(sArrEmp2[1].szName, "이순신");

	printf("이름: %s\n", sArrEmp2[1].szName);
	printf("나이: %d\n", sArrEmp2[1].iAge);
	printf("월급: %d\n", sArrEmp2[1].iSalary);


}