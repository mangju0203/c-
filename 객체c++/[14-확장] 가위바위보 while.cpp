//�⼮ 20% �߰� 40% �⸻ 40% 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define GAME 3


#define MINIMUM 1
#define MAXIMUM 3

typedef unsigned int UINT;

int main(void)
{
	//[1] ��������
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
			printf("����ڴ� ������ �½��ϴ� \n");
		
			break;
		case 1:
			printf("����ڴ� �ٸ� �½��ϴ� \n");
			
			break;

		case 2:
			printf("����ڴ� ���� �½��� \n");
			
			break;
	}
	
	  
	
	
	uiComputer = rand()%GAME;
	switch(uiComputer) 
	{
		case 0:
			printf("��ǻ�ʹ� ������ �½��ϴ� \n");
			
			break;
		case 1:
			printf("��ǻ�ʹ� �ٸ��� �½��ϴ� \n");
			
			break;

		case 2: 
			printf("��ǻ�ʹ� ���� �½��ϴ� \n");
		
			break;
	}
	
	  

		
	if (uiUser == uiComputer ) 
	{
		printf("�����ϴ�.");
		
	}
	else if ((uiUser +1)%3 == uiComputer )  
	{
		printf ("��ǻ�Ͱ� �̰���ϴ� ");
    }
	else
	{
		printf("����ڰ� �̰���ϴ�. ");
	
	}

	 
		
return 0;

}
