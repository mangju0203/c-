// �޷��� ��ȭ�� �ٲٴ� ���α׷� 
#include <stdio.h>
#define EXCHANGE_RATE 1350  

typedef unsigned int UNIT; 

int main(void)
{
	//[1] ���� ����
	UNIT uiUSD = 0;
	UNIT uiKRW = 0;
	 
	// [2] �޷� �Է�
	printf("Input your dollar?\n");
	scanf("%d", &uiUSD);
	printf("Your dollar is %d\n", uiUSD);
	
	// [3] �޷��� ��ȭ�� ���
	uiKRW = uiUSD*EXCHANGE_RATE;
	
	//[4] ��ȭ�� ��� 
 	printf("Your KRW is %d\n", uiKRW);

		
	return 0;
}



