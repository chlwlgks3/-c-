#include <stdio.h>

void main()
{
	//for���� �̿��Ͽ� 1~10���� �� ���ϱ�

	int i = 0;//1~10���� �ݺ��� ����(���Ǻ���)
	int iSum = 0;//���� ������ ����

	for (i = 1; i<=10; i++) // i :1~10 ����, 11��
	{
		iSum += i; // iSum = iSum + i;
		/*
					iSum = 0 + i;
					iSum = (0+1)+2;
					iSum = (0+1+2)+3;
					iSum = (0+1+2+3)+4;
					iSum = (0+1+2+3+4)+5;
					....
					iSum = (0+1+2+3+4+5+6+7+8+9)+10;
		*/
		//���Ǻ���i�� ���� ���
		printf("%d\n",iSum);
	}
	printf("1~10������ ���� %d�Դϴ�.\n", iSum);


}
/*
int i =0;
int iSum=0;

for(i=1;i<=10;i++)
{
iSum += i;
printf("%d\n",iSum);
}

*/