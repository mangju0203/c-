#include <stdio.h>
#define GUGUDAN 9
typedef unsigned int UINT;
//================================================//
// ����ڿ��� ���ϴ� �ܼ��� �Է¹޴� �Լ���  
// ȭ�鿡 �������� ����ϴ� �Լ��� ���� ����!! 
//===============================================//


// �Լ��� ����� ���� 3���� �ܰ谡 ����
//(1)�Լ� ����, (2)�Լ� ����(main�Լ� �ڿ���) (3) �Լ� ȣ��(main�Լ� �ȿ���)  

// (1) �Լ��� ����
int GetNumber(void); //����� Ÿ��:int, �Լ��� �̸�:GetNumber, �Է�����:����(void) 
void Show(int uiInput); // ����� Ÿ��: void, �Լ��� �̸�: Show, �޾ƾ��ϴ� ���� : uiInput 

int main(void)
{
	// ���� �����
	UINT uiInput = 0;

	//(3) �Լ��� ȣ�� 
	uiInput = GetNumber(); // GetNumber �Լ����� �Է¹��� uiInput���� main�Լ��� uiInput ���� ����� 
	Show(uiInput);

	return 0;
}

// (2) �Լ��� ����
// ���ϴ� �ܼ��� ȭ�鿡�� �Է¹ޱ�
int GetNumber(void)   
{
	UINT uiInput = 0; //main�Լ� ���� uiInput�� GetNumber���� uiInput�� �ٸ� ����  
	printf("Please, input your number: \n");
	scanf("%d", &uiInput);
	
	return uiInput; // �Է¹��� uiInput���� int������ ��ȯ������� 
}

void Show(int uiInput)
{
	// Show�Լ��� ����� Ÿ���� void�̱� ������ return�� ���� �ڵ��� �ʿ����
	// ������ �ݵ�� uiInput�� ���� �Է¹޾ƾ��� 
	UINT uiMutiply = 0;
	UINT uiIdx = 0;
	
		for(uiIdx=0; uiIdx<GUGUDAN; uiIdx++)  //uiIdx�� ������ �����ϸ� for�� ���� ���ǹ��� ����� 
	{
		uiMutiply++;
		printf("%d x %d = %d \n", uiInput, uiMutiply, uiInput * uiMutiply );	
	}
}
