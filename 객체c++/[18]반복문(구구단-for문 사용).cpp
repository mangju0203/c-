#include <stdio.h>
#define GUGUDAN 9 
typedef unsigned int UINT;

int main(void)
{
	// 변수 선언부
	UINT uiInput = 0;
	UINT uiMutiply = 0;
	UINT uiIdx = 0;
	
	// 원하는 단수를 화면에서 입력받기
	printf("Plese, input your number: \n");
	scanf("%d", &uiInput);
	
	// 입력받은 단수를 기반으로 구구단을 화면으로 출력 
	for(uiIdx=0; uiIdx<GUGUDAN; uiIdx++)  //uiIdx가 조건을 만족하면 for문 안의 조건문이 실행됨 
	{
		uiMutiply++;
		printf("%d x %d = %d \n", uiInput, uiMutiply, uiInput * uiMutiply );	
	}
		
	return 0;
}
