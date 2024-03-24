#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

//-----------------------------------------------------------
//[Step 1] �����޸� �Լ� ����
//----------------------------------------------------------

// �������� �޸� (1D & 2D) ���� 
int* MemAlloc1D(int size); 
int** MemAlloc2D(int row, int col);

// �������� �޸�(1D & 2D)����
void MemFree1D(int* piMemory1D); 
void MemFree2D(int** piMemory2D, int row);

int main(void)
{
	//,---------------------------------------
	//[Step 3] �Լ�ȣ�� 
	//--------------------------------------
	
	// Example1) ���� 1000���� ������ ������ ������ ���� 1D �޸�
	// �Ҵ��� �ʿ��� ��� 
	int* piOrig1D = MemAlloc1D(1000);
	MemFree1D(piOrig1D);
	
	//Example2) ���� Full HD ���󿡼� �� ���� ������(1920 x 1080)
	// �����ϱ� ���� �޸� �Ҵ��� �ʿ��� ��� 
	int** piOrig2D = MemAlloc2D(1080, 1920);
	MemFree2D(piOrig2D, 1080);
	
	return 0;
	
 } 
 
 // �������� �޸� (1D & 2D) �Ҵ翡 ���� �Լ� ���� 
 int* MemAlloc1D(int Size)
 {
 	int *piMemory1D = (int*)malloc(sizeof(int)*Size);
 	memset(piMemory1D, 0 ,sizeof(int)*Size);
 	
 	return piMemory1D;
 }

 int** MemAlloc2D(int row, int col)
 {
 	int** piMemory2D = (int**)malloc(sizeof(int*) * row);
 	for(int y=0; y<row; y++)
 	{
 		piMemory2D[y] = (int*)malloc(sizeof(int)*col);
 		memset(piMemory2D[y], 0 ,sizeof(int)*col);
	 }
 	
 	return piMemory2D;
 }
 
 //------------------------------------------------------------------
 //[Step 2] �����޸� �Լ� ���� 
 //------------------------------------------------------------------
 // �������� �޸� (1D & 2D) ������ ���� �Լ� ���� 
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
 
 
 
