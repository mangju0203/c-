#include <stdio.h>
#include <stdlib.h> // 여기에 rand()가 들어있음 
#include <time.h>
#define Day 7

typedef unsigned int UINT;

int main(void)
{
	//[1] 변수생성
	UINT uiDays=0;
	srand((UINT)time(NULL)); // 각 실행 시 난수가 다르게 생성됨
	uiDays = rand()%Day + 1; 

	//[2] 사용자에게 숫자 입력받기
//	printf("Input number\n");
//	scanf("%d", &uiDays); 
	
	//[3]조건문
	switch(uiDays) 
	{
		case 1:
			printf("월요일 \n");
			break;
		case 2:
			printf("화요일 \n");
			break;

		case 3:
			printf("수요일 \n");
			break;

		case 4:
			printf("목요일 \n");
			break;
			
		case 5:
			printf("금요일 \n");
			break;
			
		case 6:
			printf("토요일 \n");
			break;
		case 7:
			printf("일요일 \n");
			break;
			
		default:
			break; 
	}
 	return 0;
}
//
//
//	switch(xxx) 
//	{
//		case 1:
//			break;
//		case 2:
//			break;
//
//		case 3:
//			break;
//
//		case 4:
//			break;
//			
//		case 5:
//			break;
//			
//		case 6:
//			break;
//		case 7:
//			break;
//			
//		default:
//			break; 
//			
//	}
// 
//	
//
