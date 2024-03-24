#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

//-----------------------------------------------------------
//[Step 1] 동적메모리 함수 선언
//----------------------------------------------------------

// 포인터형 메모리 (1D & 2D) 선언 
int* MemAlloc1D(int size); 
int** MemAlloc2D(int row, int col);

// 포인터형 메모리(1D & 2D)해제
void MemFree1D(int* piMemory1D); 
void MemFree2D(int** piMemory2D, int row);

int main(void)
{
	//,---------------------------------------
	//[Step 3] 함수호출 
	//--------------------------------------
	
	// Example1) 만약 1000개의 정수형 데이터 저장을 위한 1D 메모리
	// 할당이 필요한 경우 
	int* piOrig1D = MemAlloc1D(1000);
	MemFree1D(piOrig1D);
	
	//Example2) 만약 Full HD 영상에서 한 장의 영상을(1920 x 1080)
	// 저장하기 위한 메모리 할당이 필요한 경우 
	int** piOrig2D = MemAlloc2D(1080, 1920);
	MemFree2D(piOrig2D, 1080);
	
	return 0;
	
 } 
 
 // 포인터형 메모리 (1D & 2D) 할당에 대한 함수 정의 
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
 //[Step 2] 동적메모리 함수 정의 
 //------------------------------------------------------------------
 // 포인터형 메모리 (1D & 2D) 해제에 대한 함수 정의 
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
 
 
 
