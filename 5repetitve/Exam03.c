#include <stdio.h>

void main()
{
	//for�� ��ø : 2�� for��

	int i = 0;
	int j = 0;
	int k = 0;

	printf("i j\n");
	printf("====\n");

	for (i = 0; i < 3; i++)     //i: 0,1,2���� 3��
	{
		for (j = 0; j < 3; j++)  //j: 0,1,2���� 3��
		{
			printf("%d %d\n", i, j); //(i,j) =0,0/0,1/0,2/1,0/1,1/1,2/2,0/2,1/2,2
		}
	}

	//3�� for�� �غ���
	printf("\ni j k\n");
	printf("=====\n");

	for (i = 0; i < 3; i++)        //i :0,1,2 ���� 3��
	{
		for (j = 0; j < 3; j++)    //j:0,1,2 ���� 3��
		{
			for (k = 0; k < 3; k++)//k:0,1,2 ���� 3��
			{
				printf("%d %d %d\n", i, j, k);
			}
		}
	}
}