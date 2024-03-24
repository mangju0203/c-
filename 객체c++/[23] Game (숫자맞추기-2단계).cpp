#include <stdio.h>

#define  GAME_NUMBER   5 
#define  MINIMUM       1
#define  MAXIMUM       10

typedef unsigned int UINT;     

int main(void)
{
	// -----------------------------------------------------------------------------------
	// 숫자 맞추기 게임 (제안자가 설정한 숫자를 실험자가 5번만에 맞추기)
	// -----------------------------------------------------------------------------------
	
	// (Step 1) 게임 결과를 저장할 파일 및 변수 선언! 
	UINT uiGameCounter = 0;		// for문에 사용될 게임 횟수를 카운터 
	UINT uiAnswer	   = 0; 	// 제안자가 설정한 숫자 
	UINT uiPredictor   = 0; 	// 실험자가 예측한 숫자 
	bool NumValidCheck = 0;     // bool 타입은 0은 거짓, 1은 참 (보통 거짓 "0"으로 초기화) 
	
	// (Step 2) 제안자가 숫자를 먼저 설정 (숫자의 범위는 1~10만 가능)	 
	do // [do while문] 일단 do 내부에 코딩된 내용을 무조건 한번 실행 --> while 조건이 참인 경우 계속 반복(무한)실행, 거짓이면 빠져나옴. 
	{		
		printf("Please, input your  number: (1<= input <= 10)\n");
		scanf("%d", &uiAnswer);
		
		
		// 제안자가 설정한 숫자가 기존에 가정한 범위에 포함되는지에 대한 유효성 검사 
		if((uiAnswer<MINIMUM) || (uiAnswer > MAXIMUM)  )	// Error 
		{
			printf("Error: \n");
			NumValidCheck = 1;
		}
	}while( NumValidCheck );   
	
	// (Step 3) 단일 for 반복문을 통해 게임 진행 (최대 회수는 GAME_NUMBER) 
	for(uiGameCounter=0; uiGameCounter<GAME_NUMBER; uiGameCounter++)  
	{
		// 친절한 안내를 printf를 통해 지속적으로 보여줌.
		if(uiGameCounter == 0)
		{
			printf("\n\nGame Start! Good luck!\n\n");
		}
		
		 
		do // [do while문] 일단 do 내부에 코딩된 내용을 무조건 한번 실행 --> while 조건이 참인 경우 계속 반복(무한)실행, 거짓이면 빠져나옴. 
		{		
		// 실험자가 예측한 숫자를 받아서 저장 
		
			printf("\nPlease, input predictor: ");
			scanf("%d", &uiPredictor);	
		 
		// 제안자가 설정한 숫자가 기존에 가정한 범위에 포함되는지에 대한 유효성 검사 
			if((uiPredictor<MINIMUM) || (uiPredictor > MAXIMUM)  )	// Error 
			{
			printf("Error: \n");
			NumValidCheck = 1;
			}
			else
				break;
		}while( NumValidCheck );   
	
		

		
		// if-else 조건문을 통해 비교
		if(uiAnswer==uiPredictor)	// 사용자가 정답을 맞춘 경우 
		{
			printf("Congratulation! You win! \n");
			
			break;
		} 
		else	 // 사용자가 정답을 못 맞춘 경우 
		{
			if(uiGameCounter == GAME_NUMBER-1)
			{
				printf("You Failed! \n");
				
				break;
			}
			
			printf("\nDon't be disappointed! You have still %d chances", (4-uiGameCounter));	
		}
	}

	return 0;
}
