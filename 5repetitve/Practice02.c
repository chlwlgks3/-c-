/*
	1���� 200���� 3��4�� ������� ���ϴٰ�,
	���� ���� 1000�� �ʰ��� ��� �ݺ����� ����������
	������ ���� �������� ���� ���� ���ϱ�
	
	[��°��]
	�������� �� : 156
	���� �� : 1092
*/
#include <stdio.h>

void main()
{
	int i = 0;
	int iSum = 0;

	for (i = 1; i <= 200; i++)
	{
		if ((i % 3 == 0) && (i % 4 == 0))
		{
			iSum += i;
		}
		
		if (iSum > 1000)
		{
			break;
		}
	}
	printf("�������� �� :%d\n���� �� : %d", i, iSum);

}


/* 
#include <stdio.h>

void main()
{
  int i=0;
  int iSum=0;

  for(i =1; i <201;i++)
  {
		if((i%3==0)&& (i%4==0))
		{
			iSum +=i;
		}

		if(iSum>1000)
		{
			break;
		}
  }
  printf("�������¼�:%d\n",i);
  printf("���� �� : %d\n",iSum);
  }
*/