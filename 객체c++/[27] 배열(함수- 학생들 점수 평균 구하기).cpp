#include <stdio.h>
#include <memory.h>
#define NUMBER 5 
//====================================//
//�л����� ���� ��� ���ϱ� 
//===================================//


typedef unsigned int   UINT;
int GetSum(UINT* Scores);

int main(void)
{
   UINT aiScore[NUMBER]; //aiScore��� �迭 ���� 
   UINT uiSum = 0;
   float fAvg = 0.0;
   memset(aiScore, 0, sizeof(UINT)*NUMBER); //�迭 �ʱ�ȭ 
   
   uiSum = GetSum(aiScore);
   fAvg = (float)uiSum/NUMBER;
   
   printf("����� : %.2f", fAvg);
   
   return 0;
}  
int GetSum(UINT* Scores)
{
   UINT uiIdx = 0;
   UINT uiSum2 = 0;
   
   for(uiIdx=0; uiIdx<NUMBER; uiIdx++)
   {
      printf("%d��° �л��� ������ �Է��ϼ���. : \n", uiIdx+1);
      scanf("%d",&Scores[uiIdx]);
      uiSum2 = uiSum2 + Scores[uiIdx];
   }
   return uiSum2;
}
