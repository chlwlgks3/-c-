# include <stdio.h>

void main() {



	/*
	3. ����ǥ��
	10���� : �׳� ����.
	8���� : ���ھտ� 0�� ���δ�.
	16����:���ھտ� 0x�� ���δ�.
	  > ���Ĺ��� �ɼǿ� #�� ����ϸ�, ��������� �Բ� ��µȴ�
	*/

	int iValue1 = 10; //10
	int iValue2 = 010; //8
	int iValue3 = 0x10;//16
	

	printf("iValue1 = %d\n", iValue1);
	printf("iValue2= %d\n", iValue2);
	printf("iValue3= %d\n", iValue3);

	printf("iValue1 =%o\n", iValue1);
	printf("iValue2=%o\n", iValue2);
	printf("iValue3=%#o\n", iValue3);

		printf("iValue1=%x\n", iValue1);
		printf("iValue2=%x\n", iValue2);
		printf("iValue3=%#x\n", iValue3);


		int iValue4 = 16;
		printf("iValue4=%#x\n", iValue4);
	
		
	

}