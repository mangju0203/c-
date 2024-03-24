#include <stdio.h>
#include <memory.h>
#define SIZE 10 
#define SORT

void SortMintoMax(int* list);
void SortMaxtoMin(int* list);
void ShowArray(int* list);

int main(void)
{
	// ���� �����
	int aiOrigList[SIZE] = {90, 10, 23, 17, 56, 38, 78, 36, 99, 45};
	int aiListOne[SIZE];
	int aiListTwo[SIZE];
	
	// �޸� copy
	memcpy(aiListOne, aiOrigList, sizeof(int)*SIZE);
	memcpy(aiListTwo, aiOrigList, sizeof(int)*SIZE);
	
	printf("\n���� �����͸� ����մϴ�\n");
	ShowArray(aiOrigList);
	printf("\n");

#ifdef SORT
	SortMintoMax(aiListOne);
	printf("\n");

	SortMaxtoMin(aiListTwo);	
	printf("\n");

	printf("\n MIn = %d.\n", aiListOne[0]);
	printf("\n Max = %d.\n", aiListTwo[0]);
	printf("\n Med = %d.\n", aiListOne[SIZE/2]);
#else
	printf("���� ������ �������� �ʽ��ϴ�.");
#endif

	return 0;
}

void SortMintoMax(int* list)
{
	int iX,iY,iTmp;
	
	//�������� ���� �� ���
	for(iX=0; iX<SIZE; iX++) 
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
		for(iX=0; iX<SIZE-1; iX++)  //uiIdx�� ������ �����ϸ� for�� ���� ���ǹ��� ����� 
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

         
