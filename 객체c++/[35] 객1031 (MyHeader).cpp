// [1] 필요한 헤더파일 또는 타입을 정의 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <memory.h>

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;
// -----------------------------------------------------------------------
// [2] 함수선언 : 유용한(많이 사용하는) 기능을 가지는 함수를 추가
// -----------------------------------------------------------------------
void SortMINtoMax(int* list, int size);  // 오름차순 함수 
void SortMAXtoMin(int* list, int size);  // 내림차순 함수
void ShowData1D(int* list, int size);     // 데이터 보여주는 함수 

// 포인터형 메모리(1D & 2D) 선언
int*  MemAlloc1D(int size); 
int** MemAlloc2D(int row, int col); // row : y-axis = Height, col: x-axis = Weight
void ShowData2D(int** list, int row, int col);

// 포인터형 메모리 (1D & 2D) 해제
void MemFree1D(int*  piMemory1D);
void MemFree2D(int** piMemory2D, int row);

// 임의의 데이터 생성
int GetIntNum(int min, int max); 
int* GetRandom(int* Mem1D, int num, int max);

// -----------------------------------------------------------------------
// [3] 함수정의
// -----------------------------------------------------------------------
void SortMINtoMax(int* list, int size)
{
   int iY, iX, iTmp;
    
   // 오름차순 정렬 및 출력
   for (iY = 0; iY < size; iY++)
   {
      for(iX = 0; iX < size-1; iX++)
      {
         if (list[iX] > list[iX + 1])
         {
            iTmp        = list[iX];
            list[iX]     = list[iX + 1];
            list[iX + 1] = iTmp;
         }
      }
   }
}

void SortMAXtoMin(int* list, int size)
{
   int iY, iX, iTmp;
   
   // 내림차순 정렬 및 출력
   for (iY = 0; iY < size; iY++)
   {
      for(iX = 0; iX < size-1; iX++)
      {
         if (list[iX] < list[iX + 1])
         {
            iTmp        = list[iX];
            list[iX]     = list[iX + 1];
            list[iX + 1] = iTmp;
         }
      }
   }
}

void ShowData1D(int* list, int size)
{
   int iX;
   
   for (iX = 0; iX < size; iX++)
   {
      printf("%d\n", list[iX]);
   }
}

ShowData2D(int** list, int row, int col)
{
   int i, j;
   for(i=0; i<col; i++)
   {
      for(j=0; j<col; j++)
      {
         printf("%d   ", list[i][j]);
      }
      printf("\n");
   }
}



int*  MemAlloc1D(int Size)
{
   int *piMemory1D = (int*)malloc(sizeof(int)*Size);
   memset(piMemory1D, 0, sizeof(int)*Size);
   
   return piMemory1D;
}

int** MemAlloc2D(int row, int col)
{
   int** piMemory2D = (int**)malloc(sizeof(int*) * row);
   for(int y=0; y<row; y++)
   {
      piMemory2D[y] = (int*)malloc(sizeof(int)*col);
      memset(piMemory2D[y], 0, sizeof(int)*col);
   }
   
   return piMemory2D;
}

void MemFree1D(int* piMemory1D)
{
   free(piMemory1D);
}

void MemFree2D(int** piMemory2D, int row)
{
   for(int y=0; y<row; y++)
   {
      free(piMemory2D[y]);
   }
   free(piMemory2D);
}

int GetIntNum(int min, int max)
{
   bool NumValidCheck = 0; 
   int iResult = 0;
   
   do  // [do while문] 일단 do 내부에 코딩된 내용을 무조건 한번 실행 --> while 조건이 참인 경우 계속 반복(무한)실행, 거짓이면 빠져나옴. 
   {
      NumValidCheck = 0;
      
      printf("숫자를 설정하세요 (%d ~ %d) : ", min, max);
      scanf("%d", &iResult);
   
      // 제안자가 설정한 숫자가 기존에 가정한 범위에 포함되는지에 대한 유효성 검사
      if ((iResult < min) or (iResult > max))  // Error
      {
         printf("잘못 입력하셨습니다. \n");
         printf("%d ~ %d 숫자를 입력하시오.\n", min, max);
         NumValidCheck = 1;
      }
   }while(NumValidCheck);
}

int* GetRandom(int* Mem1D, int num, int max)
{
   srand((UINT)time(NULL));  // 서로 다른 난수 발생 
   
   for(int i=0; i<num; i++)
   {
      Mem1D[i] = rand()%(max+1);
   }
   
   return Mem1D;
}
