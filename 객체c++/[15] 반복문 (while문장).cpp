#include <stdio.h>
#define MINIMUM 1
#define MAXIMUM 10
typedef unsigned int UINT; 
 
int main(void)
{
	//ȭ������� �Լ��� ���� ������ �Է¹ޱ�
	//�Է¹��� ������ �ݵ�� 1���� ���ų� ũ��, 10 ���� ���ų� ���� ������ �Է¹ޱ� 
	
	// ���� �����
	UINT uiUserInput = 0;
	bool bCheck =1; // bool�� ������ 0 �Ǵ� 1�� ������, �Ϲ������� ������ �ʱ�ȭ(0: ����, 1: ��)
	
	// ���� �Է¹ޱ�
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
