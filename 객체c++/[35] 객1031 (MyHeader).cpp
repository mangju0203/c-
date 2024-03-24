// [1] �ʿ��� ������� �Ǵ� Ÿ���� ���� 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <memory.h>

typedef unsigned char  UCHAR;
typedef unsigned short USHORT;
typedef unsigned int   UINT;
// -----------------------------------------------------------------------
// [2] �Լ����� : ������(���� ����ϴ�) ����� ������ �Լ��� �߰�
// -----------------------------------------------------------------------
void SortMINtoMax(int* list, int size);  // �������� �Լ� 
void SortMAXtoMin(int* list, int size);  // �������� �Լ�
void ShowData1D(int* list, int size);     // ������ �����ִ� �Լ� 

// �������� �޸�(1D & 2D) ����
int*  MemAlloc1D(int size); 
int** MemAlloc2D(int row, int col); // row : y-axis = Height, col: x-axis = Weight
void ShowData2D(int** list, int row, int col);

// �������� �޸� (1D & 2D) ����
void MemFree1D(int*  piMemory1D);
void MemFree2D(int** piMemory2D, int row);

// ������ ������ ����
int GetIntNum(int min, int max); 
int* GetRandom(int* Mem1D, int num, int max);

// -----------------------------------------------------------------------
// [3] �Լ�����
// -----------------------------------------------------------------------
void SortMINtoMax(int* list, int size)
{
   int iY, iX, iTmp;
    
   // �������� ���� �� ���
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
   
   // �������� ���� �� ���
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
   
   do  // [do while��] �ϴ� do ���ο� �ڵ��� ������ ������ �ѹ� ���� --> while ������ ���� ��� ��� �ݺ�(����)����, �����̸� ��������. 
   {
      NumValidCheck = 0;
      
      printf("���ڸ� �����ϼ��� (%d ~ %d) : ", min, max);
      scanf("%d", &iResult);
   
      // �����ڰ� ������ ���ڰ� ������ ������ ������ ���ԵǴ����� ���� ��ȿ�� �˻�
      if ((iResult < min) or (iResult > max))  // Error
      {
         printf("�߸� �Է��ϼ̽��ϴ�. \n");
         printf("%d ~ %d ���ڸ� �Է��Ͻÿ�.\n", min, max);
         NumValidCheck = 1;
      }
   }while(NumValidCheck);
}

int* GetRandom(int* Mem1D, int num, int max)
{
   srand((UINT)time(NULL));  // ���� �ٸ� ���� �߻� 
   
   for(int i=0; i<num; i++)
   {
      Mem1D[i] = rand()%(max+1);
   }
   
   return Mem1D;
}
