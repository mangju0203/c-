#include <stdio.h>
#include <memory.h>
#define SIZE 10 

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
	
	//오름차순 정렬 및 출력
	for(iY=0; iY<SIZE; iY++) 
	{
		for(iX=0; iX<SIZE-1; iX++)  //uiIdx가 조건을 만족하면 for문 안의 조건문이 실행됨 
		{
			if(aiListOne[iX] > aiListOne[iX+1])
			{
				iTmp = aiListOne[iX];
				aiListOne[iX] = aiListOne[iX+1];
				aiListOne[iX+1] = iTmp;
			}
		}
	}
	
	printf("\n오름차순으로 (min -> max)로 정렬된 결과를 출력합니다.\n");
	for(iX=0; iX<SIZE; iX++)  //uiIdx가 조건을 만족하면 for문 안의 조건문이 실행됨 
	{
		printf("%d ", aiListOne[iX]);
	}
	
	// 내림차순 정렬 및 출력
	
	for(iY=0; iY<SIZE; iY++) 
	{
		for(iX=0; iX<SIZE-1; iX++)  //uiIdx가 조건을 만족하면 for문 안의 조건문이 실행됨 
		{
			if(aiListOne[iX] < aiListOne[iX+1])
			{
				iTmp = aiListOne[iX];
				aiListOne[iX] = aiListOne[iX+1];
				aiListOne[iX+1] = iTmp;
			}
		}
	}
	
	printf("\n내림차순으로 (max -> min)로 정렬된 결과를 출력합니다.\n");
	for(iX=0; iX<SIZE; iX++)  //uiIdx가 조건을 만족하면 for문 안의 조건문이 실행됨 
	{
		printf("%d ", aiListOne[iX]);
	}
							
	return 0;
}


         
