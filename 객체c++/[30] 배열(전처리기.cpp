#include <stdio.h>
#include <memory.h>
#define SIZE 10 
#define SORT

void SortMintoMax(int* list);
void SortMaxtoMin(int* list);
void ShowArray(int* list);

int main(void)
{
	// 변수 선언부
	int aiOrigList[SIZE] = {90, 10, 23, 17, 56, 38, 78, 36, 99, 45};
	int aiListOne[SIZE];
	int aiListTwo[SIZE];
	
	// 메모리 copy
	memcpy(aiListOne, aiOrigList, sizeof(int)*SIZE);
	memcpy(aiListTwo, aiOrigList, sizeof(int)*SIZE);
	
	printf("\n원본 데이터를 출력합니다\n");
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
	printf("버블 정렬을 수행하지 않습니다.");
#endif

	return 0;
}

void SortMintoMax(int* list)
{
	int iX,iY,iTmp;
	
	//오름차순 정렬 및 출력
	for(iX=0; iX<SIZE; iX++) 
	{
		for(iX=0; iX<SIZE-1; iX++)  //uiIdx가 조건을 만족하면 for문 안의 조건문이 실행됨 
		{
			if(list[iX] > list[iX+1])
			{
				iTmp = list[iX];
				list[iX] = list[iX+1];
				list[iX+1] = iTmp;
			}
		}
	}
	
	printf("\n오름차순으로 (min -> max)로 정렬된 결과를 출력합니다.\n");
	ShowArray(list);
}

void SortMaxtoMin(int* list)
{	
	int iX,iY,iTmp;
	
	//오름차순 정렬 및 출력
	for(iY=0; iY<SIZE; iY++) 
	{
		for(iX=0; iX<SIZE-1; iX++)  //uiIdx가 조건을 만족하면 for문 안의 조건문이 실행됨 
		{
			if(list[iX] < list[iX+1])
			{
				iTmp = list[iX];
				list[iX] = list[iX+1];
				list[iX+1] = iTmp;
			}
		}
	}
	printf("\n내림차순으로 (max -> min)로 정렬된 결과를 출력합니다.\n");
	ShowArray(list);
}

void ShowArray(int* list)
{
	int iX,iY,iTmp;
	for(iX=0; iX<SIZE; iX++)  //uiIdx가 조건을 만족하면 for문 안의 조건문이 실행됨 
	{
		printf("%d ", list[iX]);
	}
}

         
