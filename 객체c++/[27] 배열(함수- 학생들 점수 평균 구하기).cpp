#include <stdio.h>
#include <memory.h>
#define NUMBER 5 
//====================================//
//학생들의 점수 평균 구하기 
//===================================//


typedef unsigned int   UINT;
int GetSum(UINT* Scores);

int main(void)
{
   UINT aiScore[NUMBER]; //aiScore라는 배열 선언 
   UINT uiSum = 0;
   float fAvg = 0.0;
   memset(aiScore, 0, sizeof(UINT)*NUMBER); //배열 초기화 
   
   uiSum = GetSum(aiScore);
   fAvg = (float)uiSum/NUMBER;
   
   printf("평균은 : %.2f", fAvg);
   
   return 0;
}  
int GetSum(UINT* Scores)
{
   UINT uiIdx = 0;
   UINT uiSum2 = 0;
   
   for(uiIdx=0; uiIdx<NUMBER; uiIdx++)
   {
      printf("%d번째 학생의 점수를 입력하세요. : \n", uiIdx+1);
      scanf("%d",&Scores[uiIdx]);
      uiSum2 = uiSum2 + Scores[uiIdx];
   }
   return uiSum2;
}
