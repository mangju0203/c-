#include <stdio.h>
typedef unsigned int UINT;

int main(void)
{
	// ���� �����
	UINT uiInput = 0;
	UINT uiMutiply = 0;
	
	// ���ϴ� �ܼ��� ȭ�鿡�� �Է¹ޱ�
	printf("Plese, input your number: \n");
	scanf("%d", &uiInput);
	
	// �Է¹��� �ܼ��� ������� �������� ȭ������ ��� 
	uiMutiply++; // uiMutiply �� 0���� �����Ǿ 1�� �� 
	printf("%d x %d = %d \n", uiInput, uiMutiply, uiInput * uiMutiply );
	
	uiMutiply++;
	printf("%d x %d = %d \n", uiInput, uiMutiply, uiInput * uiMutiply );
	
	uiMutiply++;
	printf("%d x %d = %d \n", uiInput, uiMutiply, uiInput * uiMutiply );	
	
	uiMutiply++;
	printf("%d x %d = %d \n", uiInput, uiMutiply, uiInput * uiMutiply );	
	
	uiMutiply++;
	printf("%d x %d = %d \n", uiInput, uiMutiply, uiInput * uiMutiply );	
	
	uiMutiply++;
	printf("%d x %d = %d \n", uiInput, uiMutiply, uiInput * uiMutiply );
	
	uiMutiply++;
	printf("%d x %d = %d \n", uiInput, uiMutiply, uiInput * uiMutiply );
	
	uiMutiply++;
	printf("%d x %d = %d \n", uiInput, uiMutiply, uiInput * uiMutiply );
	
	uiMutiply++;
	printf("%d x %d = %d \n", uiInput, uiMutiply, uiInput * uiMutiply );	
	
	return 0;
}
