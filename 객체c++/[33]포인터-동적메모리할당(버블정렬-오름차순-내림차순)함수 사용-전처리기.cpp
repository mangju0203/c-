#include <stdio.h>
#include <memory.h>
#define SIZE 11
#define SORT
#include <stdlib.h>

void SortMintoMax(int* list);
void SortMaxtoMin(int* list);
void ShowArray(int* list);

int main(void)
{
	 
	// 변수 선언부
	int *piOrigList = (int*)malloc(sizeof(int)*SIZE);
	piOrigList[0] = 90;
	piOrigList[1] = 10;
	piOrigList[2] = 23;
	piOrigList[3] = 17;
	piOrigList[4] = 56;
	piOrigList[5] = 38;
	piOrigList[6] = 78;
	piOrigList[7] = 36;
	piOrigList[8] = 99;
	piOrigList[9] = 45;
	piOrigList[10] = 68;


	int *piListOne = (int*)malloc(sizeof(int)*SIZE);
	int *piListTwo = (int*)malloc(sizeof(int)*SIZE);

	// 메모리 copy
	memcpy(piListOne, piOrigList, sizeof(int)*SIZE);
	memcpy(piListTwo, piOrigList, sizeof(int)*SIZE);
	
	printf("\n원본 데이터를 출력합니다\n");
	ShowArray(piOrigList);
	printf("\n");

#ifdef SORT
	SortMintoMax(piListOne);
	printf("\n");

	SortMaxtoMin(piListTwo);	
	printf("\n");

	printf("\n MIn = %d.\n", piListOne[0]);
	printf("\n Max = %d.\n", piListTwo[0]);
	printf("\n Med = %d.\n", piListOne[SIZE/2]);
#else
	printf("버블 정렬을 수행하지 않습니다.");
#endif
	free(piListOne)
	free(piListTwo)
	free(piOrigList)

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

          
