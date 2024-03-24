#include <stdio.h>
#include <memory.h>
#define NUMBER 5 

typedef unsigned int UINT; 

// 함수선언
void GetNumber(void); 

int main(void)
{
	// 학생들의 점수를 합산하여 평균을 구하는 프로그램//
	
	//[1] 변수 선언부(초기화)
	UINT uiScore[NUMBER]; // 배열을 선언 
	UINT uiIdx = 0; 
	UINT uiSum = 0;
	
	memset(uiScore, 0 , sizeof(UINT)*NUMBER);  // 배열을 초기화 memset(배열 이름, 초기화 값, 크기) 
//	for(uiIdx=0; uiIdx < NUMBER; uiIdx++)
//	{
//		printf("%d\n", uiScore[uiIdx]);
//	 } 
	
	// 학생들 점수 합산 및 평균계산 
	for(uiIdx=0; uiIdx < NUMBER; uiIdx++)
	{
		printf("%d번째 학생의 점수를 입력하세요\n", uiIdx+1);
		scanf("%d", &uiScore[uiIdx]);
		uiSum = uiSum + uiScore[uiIdx];
	} 

	printf("학생들의 점수의 총합은 %d입니다.", uiSum);

	return 0;
}
