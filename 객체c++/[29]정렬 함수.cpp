#include <stdio.h>
#include <memory.h>
#define SIZE 10 
//==========================================//
// 오름차순과 내림차순 배열 함수로 만들기 
//==========================================//
// 1. 오름차순 정렬 함수 2. 내림차순 정렬함수 3. 각각 함수들을 출력하는 함수 

void SortMintoMax(int* list);  // 오름차순 정렬 함수 선언 
void SortMaxtoMin(int* list);  // 내림차순 정렬 함수 선언 
void ShowArray(int* list);     // 출력함수 선언 

int main(void)
{
	// 변수 선언부
	int aiOrigList[SIZE] = {90, 10, 23, 17, 56, 38, 78, 36, 99, 45};
	int aiListOne[SIZE];
	int aiListTwo[SIZE];
	int iY = 0;
	int iX = 0;
	int iTmp = 0;
	
	// 메모리 copy
	memcpy(aiListOne, aiOrigList, sizeof(int)*SIZE);
	memcpy(aiListTwo, aiOrigList, sizeof(int)*SIZE);
	
	SortMintoMax(aiListOne);
	SortMaxtoMin(aiListTwo);

	return 0;
}

void SortMintoMax(int* list)
{
	int iX,iY,iTmp;
	
	//오름차순 정렬 및 출력
	for(iY=0; iY<SIZE; iY++) 
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
		
	//내림차순 정렬 및 출력
	for(iY=0; iY<SIZE; iY++) 
	{
		for(iX=0; iX>SIZE-1; iX++)  //uiIdx가 조건을 만족하면 for문 안의 조건문이 실행됨 
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

         
