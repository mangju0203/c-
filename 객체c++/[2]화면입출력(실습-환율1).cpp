// 달러를 한화로 바꾸는 프로그램 
#include <stdio.h>
#define EXCHANGE_RATE 1350  

typedef unsigned int UNIT; 

int main(void)
{
	//[1] 변수 선언
	UNIT uiUSD = 0;
	UNIT uiKRW = 0;
	 
	// [2] 달러 입력
	printf("Input your dollar?\n");
	scanf("%d", &uiUSD);
	printf("Your dollar is %d\n", uiUSD);
	
	// [3] 달러를 한화로 계산
	uiKRW = uiUSD*EXCHANGE_RATE;
	
	//[4] 한화를 출력 
 	printf("Your KRW is %d\n", uiKRW);

		
	return 0;
}



