#include <stdio.h>
#define MINIMUM 1
#define MAXIMUM 10
typedef unsigned int UINT; 
 
int main(void)
{
	//화면입출력 함수를 통해 정수를 입력받기
	//입력받은 정수는 반드시 1보다 같거나 크고, 10 보다 같거나 작은 정수를 입력받기 
	
	// 변수 선언부
	UINT uiUserInput = 0;
	bool bCheck =1; // bool형 변수는 0 또는 1을 가지며, 일반적으로 참으로 초기화(0: 거짓, 1: 참)
	
	// 정수 입력받기
	while(bCheck)
	{
		printf("Please, input your favoriate number: (1<= input <= 10)\n");
		scanf("%d", &uiUserInput);
		
		// condition: A or B
		if((uiUserInput<MINIMUM) || (uiUserInput > MAXIMUM)) 
		{
			printf("Error, TRy again: (1<= input <= 10)\n");
		}
		else
		{
			printf("Your number is %d", uiUserInput);
			bCheck = 0;
		}
	 } 
	return 0;
}




//while(xxx)
//{
//	printf("     \n");
//	scanf(  );
//		
//	if() 
//	{
//		printf(    );
//	}
//	else
//	{
//		printf("  ");
//	}	 
//} 
