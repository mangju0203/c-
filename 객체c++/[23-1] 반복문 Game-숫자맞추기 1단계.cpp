#include <stdio.h>

#define  GAME_NUMBER   5 
#define  MINIMUM       1
#define  MAXIMUM       10

typedef unsigned int UINT;     

int main(void)
{
	// -----------------------------------------------------------------------------------
	// 숫자 맞추기 게임 (제안자가 설정한 숫자를 실험자가 5번만에 맞추기)
	//해야할 것
	// 1)사용자에게 맞춰야하는 숫자 입력받는 코드(범위를 벗어나면 오류 표시 후 다시 입력받기) 
	// 2) 사용자에게 숫자 5번 입력받기( 범위를 벗어나면 오류 표시 후 다시 입력받기) 
	// -----------------------------------------------------------------------------------
	
	// (Step 1) 게임 결과를 저장할 파일 및 변수 선언! 
	UINT uiGameCounter = 0;		
	UINT uiAnswer	   = 0; 	
	UINT uiPredictor   = 0; 	
	bool NumValidCheck = 0;     
	
	// (Step 2) 제안자가 숫자를 먼저 설정 (숫자의 범위는 1~10만 가능)	 
	do
	{
		printf("숫자를 하나 입력하시오. (숫자의 범위는 1~10만 가능)\n");
		scanf("%d", &uiAnswer);
		
		if((uiAnswer < 0) || (uiAnswer > 10))
		{
			printf("범위를 벗어났습니다. \n");
			NumValidCheck = 1;
		}
		else
			break;
	}while(NumValidCheck);
	 // 사용자가 올바른 범위의 숫자를 입력하면 do-while문을 빠져나와서 아래 for문으로 들어감 
	
	// (Step 3) 단일 for 반복문을 통해 게임 진행 (최대 횟수는 GAME_NUMBER) 
	// 이 for문에는 1. 정답을 맞춘 경우
	// 2. 정답을 맞추지 못한 경우 
	//기회가 남았을 경우 다시 정답을 입력받아야하고, 
	//기회가 없을 경우 게임이 끝나야 하고, 
	//범위를 벗어난 경우 오류 메세지를 전달한 후 다시 정답을 입력받아야한다 
	
	for(uiGameCounter=0; uiGameCounter<GAME_NUMBER; uiGameCounter++)  
	{
		do // 사용자에게 정답을 입력받는 do-while문  
		{
			printf("정답일 거 같은 숫자를 하나 입력하시오. (숫자의 범위는 1~10만 가능)\n");
			scanf("%d", &uiPredictor);
		
			if((uiPredictor < 0) || (uiPredictor > 10))
			{
				printf("범위를 벗어났습니다. \n");
				NumValidCheck = 1;
				uiGameCounter++ ; // 총 5번 시도 할 수 있는데 한 번 입력했으니 uiGameCounter가 1개 증가하고 다시 do-while문 반복되어야함 
			}
			else
				break;
		} while(NumValidCheck); // 사용자가 정답을 입력하면 do-while 문을 빠져나와서 아래의 코드를 진행  
		 
		 // 범위를 잘 입력한 경우
		 // 1. 정답을 맞춘 경우 2. 정답을 맞추지 못한 경우
		if (uiPredictor == uiAnswer) // 정답을 맞춘 경우 
		{
			printf("정답을 맞추셨습니다! \n");
			break; // 정답을 맞췄기 때문에 이 for문을 나와야함 
		}
		else // 정답을 맞추지 못한 경우 
		{
			if(uiGameCounter == (GAME_NUMBER-1)) //기회를 모두 소진한 경우 
			{
				printf("당신은 졌습니다.\n");
				break; // 기회를 다 썼으니 게임 종료되어야함 
			}	
			
			//기회가 남은 경우
			printf("정답이 아닙니다. 남은 기회 %d 번입니다\n", (4-uiGameCounter));
		}
	}


	return 0;
}
