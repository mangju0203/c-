#include <stdio.h>

#define  GAME_NUMBER   5 
#define  MINIMUM       1
#define  MAXIMUM       10

typedef unsigned int UINT;     

int main(void)
{
	// -----------------------------------------------------------------------------------
	// ���� ���߱� ���� (�����ڰ� ������ ���ڸ� �����ڰ� 5������ ���߱�)
	// -----------------------------------------------------------------------------------
	
	// (Step 1) ���� ����� ������ ���� �� ���� ����! 
	UINT uiGameCounter = 0;		// for���� ���� ���� Ƚ���� ī���� 
	UINT uiAnswer	   = 0; 	// �����ڰ� ������ ���� 
	UINT uiPredictor   = 0; 	// �����ڰ� ������ ���� 
	bool NumValidCheck = 0;     // bool Ÿ���� 0�� ����, 1�� �� (���� ���� "0"���� �ʱ�ȭ) 
	
	// (Step 2) �����ڰ� ���ڸ� ���� ���� (������ ������ 1~10�� ����)	 
	do // [do while��] �ϴ� do ���ο� �ڵ��� ������ ������ �ѹ� ���� --> while ������ ���� ��� ��� �ݺ�(����)����, �����̸� ��������. 
	{		
		printf("Please, input your  number: (1<= input <= 10)\n");
		scanf("%d", &uiAnswer);
		
		
		// �����ڰ� ������ ���ڰ� ������ ������ ������ ���ԵǴ����� ���� ��ȿ�� �˻� 
		if((uiAnswer<MINIMUM) || (uiAnswer > MAXIMUM)  )	// Error 
		{
			printf("Error: \n");
			NumValidCheck = 1;
		}
	}while( NumValidCheck );   
	
	// (Step 3) ���� for �ݺ����� ���� ���� ���� (�ִ� ȸ���� GAME_NUMBER) 
	for(uiGameCounter=0; uiGameCounter<GAME_NUMBER; uiGameCounter++)  
	{
		// ģ���� �ȳ��� printf�� ���� ���������� ������.
		if(uiGameCounter == 0)
		{
			printf("\n\nGame Start! Good luck!\n\n");
		}
		
		 
		do // [do while��] �ϴ� do ���ο� �ڵ��� ������ ������ �ѹ� ���� --> while ������ ���� ��� ��� �ݺ�(����)����, �����̸� ��������. 
		{		
		// �����ڰ� ������ ���ڸ� �޾Ƽ� ���� 
		
			printf("\nPlease, input predictor: ");
			scanf("%d", &uiPredictor);	
		 
		// �����ڰ� ������ ���ڰ� ������ ������ ������ ���ԵǴ����� ���� ��ȿ�� �˻� 
			if((uiPredictor<MINIMUM) || (uiPredictor > MAXIMUM)  )	// Error 
			{
			printf("Error: \n");
			NumValidCheck = 1;
			}
			else
				break;
		}while( NumValidCheck );   
	
		

		
		// if-else ���ǹ��� ���� ��
		if(uiAnswer==uiPredictor)	// ����ڰ� ������ ���� ��� 
		{
			printf("Congratulation! You win! \n");
			
			break;
		} 
		else	 // ����ڰ� ������ �� ���� ��� 
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
