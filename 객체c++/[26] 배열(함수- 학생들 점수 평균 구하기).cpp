#include <stdio.h>
#include <memory.h>
#define NUMBER 5 


typedef unsigned int UINT; 

// 함수 선언 
int Sum(UINT* Scores);  // 배열이 학생들의 점수인 score을 받아야하므로 입력인자에 int* Scores를 작성 

int main(void)
{

	
	
	//[1] 변수 선언부(초기화)
	UINT uiSum = 0;
	float fAvg = 0.0;
	UINT aiScore[NUMBER]; // 크기가 NUMBER인 배열 aiScore를 선언 
	memset(aiScore, 0, sizeof(UINT)*NUMBER); 
		
  
    // 함수 호출  
	uiSum = Sum(aiScore);  // 위에 함수 선언부분에 입력인자에 배열이 들어가야하니까 입력인자에 배열인 aiScore를 넣었다 
	
	
	// 합산된 점수에 대한 평균 구하기 
	fAvg = (float)uiSum / NUMBER;
	printf("Average = %.2f\n", fAvg);
	
	return 0;
}


// 함수 정의 (함수 호출 부분에서 세미콜론만 배주면 됨) 
// 배열은 입력이 있어야함 
int Sum(UINT* Scores) 
{
	
	UINT uiIdx = 0;
	UINT uiSum = 0;
	for(uiIdx=0; uiIdx < NUMBER; uiIdx++)  
	{
		printf("%d번째 학생의 점수를 입력하세요>> \n", uiIdx+1);
		scanf("%d", &Scores[uiIdx]); //aiScore배열에는 학생 5명의 점수 다 입력되어 있음 	
		uiSum = uiSum + Scores[uiIdx];
	} 
	printf("학생 %d명의 점수 총합은 %d 점입니다.\n\n", uiIdx, uiSum);
	
	return uiSum;
}

