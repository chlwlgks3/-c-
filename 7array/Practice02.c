#include <stdio.h>


int main() 
{
	// szSource �迭�� �̿��Ͽ�, szTarget�̶�� �迭�� ABCCBA �����ϱ�
	//		1. for�� �̿�

	char szSource[]		= "ABC";
	
	// �ڵ� �ۼ�
	
	char szTarget[7] = {0, };
	int	 i = 0; // for���� �̿�

	for (i = 0; i < 6; i++)
	{
		if (i <= 2) 
		{
			szTarget[i] = szSource[i];
		}
		else
		{
			szTarget[i] = szSource[5 - i];
		}
	}
	printf("%s", szTarget);
}