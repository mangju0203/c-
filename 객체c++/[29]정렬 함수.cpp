#include <stdio.h>
#include <memory.h>
#define SIZE 10 
//==========================================//
// ���������� �������� �迭 �Լ��� ����� 
//==========================================//
// 1. �������� ���� �Լ� 2. �������� �����Լ� 3. ���� �Լ����� ����ϴ� �Լ� 

void SortMintoMax(int* list);  // �������� ���� �Լ� ���� 
void SortMaxtoMin(int* list);  // �������� ���� �Լ� ���� 
void ShowArray(int* list);     // ����Լ� ���� 

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
	
	SortMintoMax(aiListOne);
	SortMaxtoMin(aiListTwo);

	return 0;
}

void SortMintoMax(int* list)
{
	int iX,iY,iTmp;
	
	//�������� ���� �� ���
	for(iY=0; iY<SIZE; iY++) 
	{
		for(iX=0; iX<SIZE-1; iX++)  //uiIdx�� ������ �����ϸ� for�� ���� ���ǹ��� ����� 
		{
			if(list[iX] > list[iX+1])
			{
				iTmp = list[iX];
				list[iX] = list[iX+1];
				list[iX+1] = iTmp;
			}
		}
	}
	
	printf("\n������������ (min -> max)�� ���ĵ� ����� ����մϴ�.\n");
	ShowArray(list);
}


void SortMaxtoMin(int* list)
{
	
	int iX,iY,iTmp;
		
	//�������� ���� �� ���
	for(iY=0; iY<SIZE; iY++) 
	{
		for(iX=0; iX>SIZE-1; iX++)  //uiIdx�� ������ �����ϸ� for�� ���� ���ǹ��� ����� 
		{
			if(list[iX] < list[iX+1])
			{
				iTmp = list[iX];
				list[iX] = list[iX+1];
				list[iX+1] = iTmp;
			}
		}
	}
	
	printf("\n������������ (max -> min)�� ���ĵ� ����� ����մϴ�.\n");
	ShowArray(list);
}

void ShowArray(int* list)
{
	int iX,iY,iTmp;
	for(iX=0; iX<SIZE; iX++)  //uiIdx�� ������ �����ϸ� for�� ���� ���ǹ��� ����� 
	{
		printf("%d ", list[iX]);
	}
}

         
