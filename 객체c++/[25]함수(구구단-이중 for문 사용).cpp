#include <stdio.h>

typedef unsigned int UINT;
//===========================================================================//
// �� ���α׷��� �������� Ȯ���Ͽ� �ִ� AxB�� ����ϴ� �ڵ�
// �̶� A�� ù��° ��, B�� �ι�° ���� �ش�(1x1 ~ AxB) 
// ����ڿ��� A,B�� �Է¹޴� �Լ��� ȭ�鿡 �������� ����ϴ� �Լ��� �ʿ� 
//==========================================================================//
// (1) �Լ� ���� 
int GetNumber(void); // ����ڿ��� ���� 2���� �Է¹޴� �Լ� 
void Display(int First, int Second);  // ����ڿ��� �Է¹��� ���ڷ� ȭ�鿡 ������ ����ϴ� �Լ� 

int main(void)
{
	//[1] ���� �����
	UINT uiInput = 0;     // ù��° �ܼ� A 
	UINT uiInput2 = 0;    // �ι�° �ܼ� B 
	
	//[2] ȭ��������� ���� ����� �ܼ� �Է�(�Լ�ȣ��) 
	uiInput = GetNumber();  // GetNumber�Լ��� ȣ���� �Է¹��� uiUserInput ���� uiInput�� ���� 
	uiInput2 = GetNumber(); // GetNumber�Լ��� ȣ���� �Է¹��� uiUserInput ���� uiInput2�� ���� 

	//[3] ���� for���� ���� �������� ȭ�鿡 ���
	Display(uiInput, uiInput2);
	 
	return 0;
}

// (2) �Լ� ����
// ȭ�����κ��� uiUserInput ���� �Է¹޾� intŸ������ ��ȯ 
int GetNumber(void) 
{
	UINT uiUserInput = 0;
	
	printf("���ϴ� ���� �Է��Ͻÿ�. \n");
	scanf("%d", &uiUserInput);
		
	return uiUserInput;
}

void Display(int First, int Second)
{
	UINT uiMutiply = 0;
	UINT uiIdx1 = 0;
	UINT uiIdx2 = 0;
	UINT uiDan = 0; 
	
	// ����ڰ� 3�� �Է��ϸ� 1x1..1x9....3x9���� ���;���  
	for (uiIdx1=0;uiIdx1<First;uiIdx1++) // uiIdx �� for���� �ݺ��ϱ� ���� �ε����ϻ�! 
	{
		uiDan++;
		uiMutiply = 0; // uiMutiply �� 9��ä�� �� for���� ���������� ������ 0���� �ʱ�ȭ 
		
		// �Ʒ� for���� ������ �ι�° ���ڿ� ���� �ݺ��� ( x9���� �ϱ� ���� �ݺ���) 
		for(uiIdx2=0;uiIdx2<Second;uiIdx2++)
		{
			uiMutiply++;
			printf("%d x %d = %d \n", uiDan, uiMutiply, uiDan * uiMutiply );				
		}
		
		printf("\n");	 
	}
}
