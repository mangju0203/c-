#include <stdio.h>
#include <memory.h>
#define SIZE 10 

int main(void)
{
	// ���� �����
	int aiOrigList[SIZE] = {90, 10, 23, 17, 56, 38, 78, 36, 99, 45};
	int aiListOne[SIZE];
	int aiListTwo[SIZE];
	int iY = 0;
	int iX = 0;
	int iTmp = 0;
	
	// �޸� copy
	memcpy(aiListOne, aiOrigList, sizeof(int)*SIZE);
	memcpy(aiListTwo, aiOrigList, sizeof(int)*SIZE);
	
	//�������� ���� �� ���
	for(iY=0; iY<SIZE; iY++) 
	{
		for(iX=0; iX<SIZE-1; iX++)  //uiIdx�� ������ �����ϸ� for�� ���� ���ǹ��� ����� 
		{
			if(aiListOne[iX] > aiListOne[iX+1])
			{
				iTmp = aiListOne[iX];
				aiListOne[iX] = aiListOne[iX+1];
				aiListOne[iX+1] = iTmp;
			}
		}
	}
	
	printf("\n������������ (min -> max)�� ���ĵ� ����� ����մϴ�.\n");
	for(iX=0; iX<SIZE; iX++)  //uiIdx�� ������ �����ϸ� for�� ���� ���ǹ��� ����� 
	{
		printf("%d ", aiListOne[iX]);
	}
	
	// �������� ���� �� ���
	
	for(iY=0; iY<SIZE; iY++) 
	{
		for(iX=0; iX<SIZE-1; iX++)  //uiIdx�� ������ �����ϸ� for�� ���� ���ǹ��� ����� 
		{
			if(aiListOne[iX] < aiListOne[iX+1])
			{
				iTmp = aiListOne[iX];
				aiListOne[iX] = aiListOne[iX+1];
				aiListOne[iX+1] = iTmp;
			}
		}
	}
	
	printf("\n������������ (max -> min)�� ���ĵ� ����� ����մϴ�.\n");
	for(iX=0; iX<SIZE; iX++)  //uiIdx�� ������ �����ϸ� for�� ���� ���ǹ��� ����� 
	{
		printf("%d ", aiListOne[iX]);
	}
							
	return 0;
}


         
