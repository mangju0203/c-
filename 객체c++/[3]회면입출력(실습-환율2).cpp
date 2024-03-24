//한화를 달러로 바꾸기 
#include <stdio.h>
#define EXCHANGE_RATE 1350 //환율 값을 변경하기 쉽게 위에서 선언하기  

typedef unsigned int UNIT; 

int main(void)
{
	//[1] 변수 선언
	float fUSD = 0.0; 
	UNIT uiKRW = 0;
	 
	// [2] 한화 입력
	printf("Input your KRW?\n");
	scanf("%d", &uiKRW);
	printf("Your KRW is %d\n", uiKRW);
	
	// [3] 한화를 달러로 계산
	fUSD = (float)uiKRW/EXCHANGE_RATE; // 데이터형을 float으로 바꿔주기  
	
	//[4] 달러를 출력 
	printf("Your dollar is %.2f\n", fUSD);
	
	return 0;
}
