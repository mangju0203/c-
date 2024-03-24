#include <stdio.h> 
#include "MyHeader.h"
#define SIZE 11

#define HEIGHT 5
#define WIDTH 5

int main(void)
{
//   int aiData[SIZE] = {90,10,23,17,56,38,78,36,99,45,68};   
//   
//   
//   SortMINtoMax(aiData, SIZE);
//   ShowData1D(aiData, SIZE);
//      
//   printf("\n");
//   SortMaxtoMin(aiData, SIZE);
//   ShowData1D(aiData, SIZE);
//   
//   int iNumber = GetIntNum(1, 100);
//   printf("\n Number = %d", iNumber);

	//[Test3] -------------------------------------------------------	
	int i, j;
	int* piOrig1D = MemAlloc1D(HEIGHT*WIDTH);
	int* piTmp1D = MemAlloc1D(HEIGHT*WIDTH);
    int** piOrig2D = MemAlloc2D(HEIGHT,WIDTH);
    int** piTmp2D = MemAlloc2D(HEIGHT,WIDTH);
   
	// [1] 1D 메모리에 값을 입력
	//ShowData1D(piOrig1D, HEIGHT*WIDTH);
	for(i=0; i<HEIGHT*WIDTH; i++)
	{
		piOrig1D[i] = i+1;
	} 
   ShowData1D(piOrig1D, HEIGHT*WIDTH);
   
   // [2] 1D메모리를 2D메모리로 conversion
	printf("\n\n");   
	Copy1Dto2D(piOrig1D,piOrig2D, HEIGHT, WIDTH);
	ShowData2D(piOrig2D, HEIGHT, WIDTH);
	
    // [3] 2D메모리를 1D메모리로 conversion
	printf("\n\n");
	Copy2Dto1D(piOrig2D, piTmp1D, HEIGHT,WIDTH);
    ShowData1D(piOrig1D, HEIGHT*WIDTH);

	// [4] 2D메모리를 2D메모리로 Copy
	for(i=0; i<HEIGHT; i++)
	{
		memcpy(piTmp2D[i], piOrig2D[i], sizeof(int)*WIDTH);
	} 
   ShowData2D(piTmp2D, HEIGHT, WIDTH);
//   int* piMem1D = MemAlloc1D(1000);
//   GetRandom(piMem1D, 1000, 3000);
//   ShowData1D(piMem1D, 1000);
//   MemFree1D(piMem1D);
   
   //메모리해제
   MemFree1D(piOrig1D);
   MemFree1D(piTmp1D);
   MemFree2D(piOrig2D,HEIGHT);
   MemFree2D(piTmp2D,HEIGHT);

   return 0;
}
