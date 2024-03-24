#include <stdio.h>
#define GUGUDAN 9 

typedef unsigned int UINT;

// 사용자의 입력 ( 몇 단까지 출력을 할 것인지)
// 이중 for문을 사용하여 1단부터 1x1부터 사용지가 입력한 단수까지 출력 

int main(void)
{
	//[1] 변수 선언부
	UINT uiInput = 0;
	UINT uiMutiply = 0;
	UINT uiIdx1 = 0;
	UINT uiIdx2 = 0;
	UINT uiDan = 0; 
	
	//[2] 이중 for문을 통해 구구단을 화면에 출력
	// 아래 for문은 구구단 첫번째 인자애 대한 반복문 (uiInput 단수까지 출력하기위한 반복문) 
	for (uiIdx1=0;uiIdx1<GUGUDAN;uiIdx1++) // uiIdx 는 for문을 반복하기 위한 인덱스일뿡! 
	{
		uiDan++;
		uiMutiply = 0; // uiMutiply 가 9인채로 이 for문을 빠져나오기 떄문에 0으로 초기화 
		if(uiDan==4) // 3단까지만 출력 
		{
			break;
		}
		// 아래 for문은 구구단 두번째 인자에 대한 반복문 ( x9까지 하기 위한 반복문) 
		for(uiIdx2=0;uiIdx2<GUGUDAN;uiIdx2++)
		{
			uiMutiply++;
			printf("%d x %d = %d \n", uiDan, uiMutiply, uiDan * uiMutiply );	
			
			// 제어문 break: 각 단별로 5까지만 구구단을 출력 
			if(uiMutiply == 5)
			{
				break;
			}
		}
		printf("\n"); // 각 단별로 줄 바꾸기  
	 
	 } 
	return 0;
}

//
//	for ( ; ; ) 
//	{ 
//		if(코드를 멈추는 조건) // 3단까지만 출력 
//		{
//			break;
//		}
//		for ( ; ; ) 
//		{	
//			if(코드를 멈추는 조건) 
//			{
//				break;
//			}
//		}
//  }
