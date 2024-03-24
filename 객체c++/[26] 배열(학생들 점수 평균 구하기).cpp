#include <stdio.h>
#include <memory.h>
#define NUMBER 5 

typedef unsigned int UINT; 

int main(void)
{
	// 학생들의 점수를 합산하여 평균을 구하는 프로그램
	
	
	//[1] 변수 선언부(초기화)
	UINT uiScore[NUMBER];
	UINT uiIdx = 0;
	for(uiIdx=0; uiIdx < NUMBER; uiIdx++)
	{
		printf("%d", uiScore[uiIdx]);
	 } 
	memset(uiScore, 0, sizeof(UINT)*NUMBER);  // memset(배열 이름, 초기화 값, 크기) 
	
	return 0;
}
