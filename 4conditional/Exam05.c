//�Էµ� ������ ���� ���� ��� 
// 100�� (����)A����(if������ø)    , 90~99 : A���� , 80~89:B���� , 70~79 : C���� , 70�̸�:F���� ,
//0��:(����)F����(if������ø)


#include <stdio.h>

void main(){
		int iScore = 0;
		printf("�����Է�: ");
		scanf("%d", &iScore);



		if (iScore >= 90) //90�̻�
		{
			if (iScore == 100)
			{
				printf("(����)");
			}
			printf("A����\n");
		}

		else if (iScore >= 80)
		{
			printf("B����\n");
		}
		else if (iScore >= 70)
		{
			printf("C����\n");
		}
		else {
			if (iScore == 0)
			{
				printf("(����)");
			}
			printf("F����\n");
		}
}

/* void main() {

	int iScore = 0;
	printf("�����Է�: ");
	scanf("%d", &iScore);

	if (iScore >= 90) {
		if (iScore == 100) {
			printf("(����)");
		}

		printf("A����");
	}
	else if (iScore >= 80) {
		printf("B����");
	}
	else if (iScore >= 70) {
		printf("C����");
	}
	else if (iScore < 70) {
		if (iScore == 0) {
			printf("(����)");
		}
		printf("F����");
	}


} */