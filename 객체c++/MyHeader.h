//-------------------------------------------------------------
//[1]�ʿ��� ������� �Ǵ� Ÿ���� �� 
//-------------------------------------------------------------
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <memory.h>
#define SIZE 11

typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned int UINT;


//-------------------------------------------------------------
//[2]�Լ����� : ������ ����� ������ �Լ� �߰� 
//-------------------------------------------------------------
void SortMINtoMax(int*list, int size); 
void SortMaxtoMIN(int*list, int size); 
void ShowData1D(int*list, int size);

void SortMINtoMax(int*list); 
void SortMaxtoMIN(int*list); 
void ShowArray(int*list);
 
// �������� �޸� (1D & 2D) ����
int* MemAlloc1D(int size);
int** MemAlloc2D(int row, int col); // row: 

// �������� �޸�(1D & 2D) ����
void MemFree1D(int* piMemory1D);
void MemFree2D(int** piMemory2D, int row);

void Copy1Dto2D (int * source, int**dest, int row ,int col);
void Copy2Dto1D (int ** source, int*dest, int row ,int col);
int GetIntNum(int min, int max);

//-------------------------------------------------------------
//[3]�Լ� ���� 
//-------------------------------------------------------------
void SortMINtoMax(int*list, int size)
{
   int iY,iX,iTmp;
   
     for (iY = 0; iY < size; iY++)
   {
      for(iX = 0; iX < size-1; iX++)
      {
         if (list[iX] > list[iX + 1])
         {
            iTmp            = list[iX];
            list[iX]      = list[iX + 1];
            list[iX + 1] = iTmp;
         }
      }
   } 
}

void SortMaxtoMIN(int*list, int size)
{
   int iY,iX,iTmp;
         
   for (iY = 0; iY < size; iY++)
   {
      for(iX = 0; iX < size-1; iX++)
      {
         if (list[iX] < list[iX + 1])
         {
            iTmp            = list[iX];
            list[iX]      = list[iX + 1];
            list[iX + 1] = iTmp;
         }
      }
   } 

}
void ShowData1D(int*list, int size)
{
      
    int iX;
    
   for (iX = 0; iX < size; iX++)
   {
      printf("%d\n ", list[iX]);
   }
}

void ShowData2D(int** list, int row, int col)
{
   int i, j;
   for(i=0; i<row; i++)
   {
      for(j=0; j<col; j++)
      {
         printf("%d   ", list[i][j]);
      }
      printf("\n");
   }
}
//int main (void)
//{
//   int aiData[SIZE] = {90, 10, 23, 17, 56, 38, 78, 36, 99, 45};
//   
//   SortMINtoMax(aiData, SIZE);
//      ShowData1D(aiData, SIZE);
//      
//      printf("\n");
//      SortMaxtoMIN(aiData, SIZE);
//      ShowData1D(aiData, SIZE);
//}
int* MemAlloc1D(int size)
{
   int *piMemory1D = (int*)malloc(sizeof(int)*size);
   memset(piMemory1D, 0, sizeof(int)*size);
   
   return piMemory1D;
}  
  
int** MemAlloc2D(int row, int col)
{
   int **piMemory2D = (int**)malloc(sizeof(int*)*row);
   for(int y = 0; y<row; y++)
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

      do // [do while��] �ϴ� do ���ο� �ڵ��� ������ ������ �ѹ� ���� --> while ������ ���� ��� ��� �ݺ�(����)����, �����̸� ��������. 
         {
            NumValidCheck = 0;
            
            printf("Please, input your number: (1<= input <=10) \n");
            scanf("%d", &iResult);         
         
            // �����ڰ� ������ ���ڰ� ������ ������ ������ ���ԵǴ����� ���� ��ȿ�� �˻�
            if( (iResult > max) || (iResult < min) )   // Error 
            {
               printf("Error, try again: (1<= input <=10) \n");   
               NumValidCheck = 1;
         
            }   
         }while( NumValidCheck ); 

   return iResult;
}

int* GedRandom(int*Mem1D, int num, int max)
{
   srand((UINT)time(NULL));
   
   for(int i =0; i < num; i++)
   {
      Mem1D[i] = rand()%(max+1);
   }
   
   return Mem1D;// [1] �ʿ��� ������� �Ǵ� Ÿ���� ���� 
}

void Copy1Dto2D (int * source, int**dest, int row ,int col)
{
   int i,j;
   for(i=0; i<row; i++)
   {
      for(j=0; j<col; j++)
      {
         dest[i][j] = source[i*col + j];
      } 
   } 
}

void Copy2Dto1D (int ** source, int*dest, int row ,int col)
{
   int i,j;
   for(i=0; i<row; i++)
   {
      for(j=0; j<col; j++)
      {
         dest[i*col + j] = source[i][j];
      } 
   } 
}
