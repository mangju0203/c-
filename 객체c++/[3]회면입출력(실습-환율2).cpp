//��ȭ�� �޷��� �ٲٱ� 
#include <stdio.h>
#define EXCHANGE_RATE 1350 //ȯ�� ���� �����ϱ� ���� ������ �����ϱ�  

typedef unsigned int UNIT; 

int main(void)
{
	//[1] ���� ����
	float fUSD = 0.0; 
	UNIT uiKRW = 0;
	 
	// [2] ��ȭ �Է�
	printf("Input your KRW?\n");
	scanf("%d", &uiKRW);
	printf("Your KRW is %d\n", uiKRW);
	
	// [3] ��ȭ�� �޷��� ���
	fUSD = (float)uiKRW/EXCHANGE_RATE; // ���������� float���� �ٲ��ֱ�  
	
	//[4] �޷��� ��� 
	printf("Your dollar is %.2f\n", fUSD);
	
	return 0;
}
