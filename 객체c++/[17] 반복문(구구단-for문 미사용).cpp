#include <stdio.h>
typedef unsigned int UINT;

int main(void)
{
	// 변수 선언부
	UINT uiInput = 0;
	UINT uiMutiply = 0;
	
	// 원하는 단수를 화면에서 입력받기
	printf("Plese, input your number: \n");
	scanf("%d", &uiInput);
	
	// 입력받은 단수를 기반으로 구구단을 화면으로 출력 
	uiMutiply++; // uiMutiply 가 0에서 증가되어서 1이 됨 
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
