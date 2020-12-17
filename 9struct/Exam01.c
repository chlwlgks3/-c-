// ����ü �ȿ� ����ü
// �Ű������� ���

#include <stdio.h>

typedef struct _POINT
{
	int x;
	int y;
}POINT;

//����ü �ȿ� �ٸ� ����ü�� ����� ��������, �� ����ü�� �� ���� �̸� ����Ǿ���Ѵ�.
typedef struct _CIRCLE
{
	POINT sPoint;	 // (��ǥ)����
	int	  iLen;		 // ������
}CIRCLE;

//[����]
void SetCircleVal(CIRCLE sCircle);
void SetCircleRef(CIRCLE* pCircle);	//CIRCLE Ÿ�� ������ �ּ� ���� ���޹ްڴ�.

void main()
{
	POINT sPoint = { 0, }; //POINT�� CIRCLE�ȿ� �ִٰ� �ؼ� ��� ���ϴ°� �ƴ�
	CIRCLE c1 = { 0, };
	CIRCLE c2 = { 0, };
	CIRCLE c3 = { 0, };

	printf("c1�� ũ�� : %d\n", sizeof(c1));

	// ����ü�� ����� ����ü�� ��, �� ��(.)�� ��� �����Ѵ�.
	printf("c1 ��ǥ : (%d,%d), ������ : %d\n", c1.sPoint.x, c1.sPoint.y, c1.iLen);
	SetCircleVal(c1);	// Call by Value
	printf("c1 ��ǥ : (%d,%d), ������ : %d\n", c1.sPoint.x, c1.sPoint.y, c1.iLen); //�Լ��� �Ű������� �����ͺ��� �� �ƴϹǷ� ������ ���� ����������. �Լ�ȣ���� �Ҹ�!
	SetCircleRef(&c1); //�Ű������� �����ͺ����̹Ƿ� c1�� �ּҰ� ����
	printf("c1 ��ǥ : (%d,%d), ������ : %d\n", c1.sPoint.x, c1.sPoint.y, c1.iLen);

	//����ü ������ �� ����
	c2.iLen = c1.iLen;
	c2.sPoint.x = c1.sPoint.x;
	c2.sPoint.y = c1.sPoint.y;

	c3 = c1; //�ڷ����� CIRCLE�� ���� ������ ����

	//if ( c1 == c3 ) {} �Ұ��� : �츮�� ������ �ڷ����̱� ������ ��� ������ �𸥴�.

}
/*
	SetCircleVal ��� �� ȣ���� �� ���� 12byte ������ ���� (�Ű����� Ÿ���� CIRCLE 12byte)
		>����ü�� ũ�Ⱑ ũ�� �� ũ�⸸ŭ ����
		>���� ȣ�� �� ���� ���α׷��� ����� �Ѵ�.

	SetCircleRef ��� �� ȣ���� �� ���� 4byte ������ ����(�Ű������� ������ ���� 4byte)
		>����ü�� ũ��� ������� ������ 4byte
*/


//[����]
void SetCircleVal(CIRCLE sCircle)	// �Լ� ȣ�� �� 12byte¥�� CIRCLE ������ ���� ����
{
	sCircle.sPoint.x = 3;
	sCircle.sPoint.y = 4;
	sCircle.iLen = 5;
}

void SetCircleRef(CIRCLE* pCircle)
{
	//pCircle�� ����ü�� ������ ���� : �ش��ּ��� ��� ���ٽ� -> ���
	//����� �����ߴ��� sPoint�� �ִ�. ������ ������ �ƴ϶� ��(.)�� ���

	pCircle->sPoint.x = 5;
	pCircle->sPoint.y = 6;
	pCircle->iLen = 10;
}