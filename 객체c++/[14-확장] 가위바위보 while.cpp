//출석 20% 중간 40% 기말 40% 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define GAME 3


#define MINIMUM 1
#define MAXIMUM 3

typedef unsigned int UINT;

int main(void)
{
	//[1] 변수선언
	UINT uiUser = 0;
	UINT uiComputer = 0;
	srand((UINT)time(NULL));

	bool bCheck =1;
	
	
	while(bCheck)
	{
	printf("user number?\n");
	scanf("%d", &uiUser);
		
		if( (uiUser<MINIMUM) || (uiUser > MAXIMUM) ) 
		{
			printf("Error, Try again: (0<= input <= 3)\n");
		}
		else
		{
			printf("Your attend is %d\n", uiUser);
			bCheck = 0;
		}
	  
	}
	switch(uiUser) 
	{
		case 0:
			printf("사용자는 가위를 냈습니다 \n");
		
			break;
		case 1:
			printf("사용자는 바를 냈습니다 \n");
			
			break;

		case 2:
			printf("사용자는 보를 냈습니 \n");
			
			break;
	}
	
	  
	
	
	uiComputer = rand()%GAME;
	switch(uiComputer) 
	{
		case 0:
			printf("컴퓨터는 가위를 냈습니다 \n");
			
			break;
		case 1:
			printf("컴퓨터는 바를보 냈습니다 \n");
			
			break;

		case 2: 
			printf("컴퓨터는 보를 냈습니다 \n");
		
			break;
	}
	
	  

		
	if (uiUser == uiComputer ) 
	{
		printf("비겼습니다.");
		
	}
	else if ((uiUser +1)%3 == uiComputer )  
	{
		printf ("컴퓨터가 이겼습니다 ");
    }
	else
	{
		printf("사용자가 이겼습니다. ");
	
	}

	 
		
return 0;

}
