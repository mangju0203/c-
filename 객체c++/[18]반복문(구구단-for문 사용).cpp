#include <stdio.h>
#define GUGUDAN 9 
typedef unsigned int UINT;

int main(void)
{
	// ���� �����
	UINT uiInput = 0;
	UINT uiMutiply = 0;
	UINT uiIdx = 0;
	
	// ���ϴ� �ܼ��� ȭ�鿡�� �Է¹ޱ�
	printf("Plese, input your number: \n");
	scanf("%d", &uiInput);
	
	// �Է¹��� �ܼ��� ������� �������� ȭ������ ��� 
	for(uiIdx=0; uiIdx<GUGUDAN; uiIdx++)  //uiIdx�� ������ �����ϸ� for�� ���� ���ǹ��� ����� 
	{
		uiMutiply++;
		printf("%d x %d = %d \n", uiInput, uiMutiply, uiInput * uiMutiply );	
	}
		
	return 0;
}
