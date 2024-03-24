#include <stdio.h>
#define GUGUDAN 9
typedef unsigned int UINT;
//================================================//
// 사용자에게 원하는 단수를 입력받는 함수와  
// 화면에 구구단을 출력하는 함수를 만들 것임!! 
//===============================================//


// 함수를 만들기 위해 3가지 단계가 있음
//(1)함수 선언, (2)함수 정의(main함수 뒤에서) (3) 함수 호출(main함수 안에서)  

// (1) 함수를 선언
int GetNumber(void); //출력의 타입:int, 함수의 이름:GetNumber, 입력인자:없음(void) 
void Show(int uiInput); // 출력의 타입: void, 함수의 이름: Show, 받아야하는 인자 : uiInput 

int main(void)
{
	// 변수 선언부
	UINT uiInput = 0;

	//(3) 함수를 호출 
	uiInput = GetNumber(); // GetNumber 함수에서 입력받은 uiInput값이 main함수의 uiInput 값에 저장됨 
	Show(uiInput);

	return 0;
}

// (2) 함수를 정의
// 원하는 단수를 화면에서 입력받기
int GetNumber(void)   
{
	UINT uiInput = 0; //main함수 안의 uiInput과 GetNumber안의 uiInput은 다른 것임  
	printf("Please, input your number: \n");
	scanf("%d", &uiInput);
	
	return uiInput; // 입력받은 uiInput값을 int형으로 반환해줘야함 
}

void Show(int uiInput)
{
	// Show함수의 출력의 타입이 void이기 때문에 return에 대한 코딩이 필요없음
	// 하지만 반드시 uiInput의 값은 입력받아야함 
	UINT uiMutiply = 0;
	UINT uiIdx = 0;
	
		for(uiIdx=0; uiIdx<GUGUDAN; uiIdx++)  //uiIdx가 조건을 만족하면 for문 안의 조건문이 실행됨 
	{
		uiMutiply++;
		printf("%d x %d = %d \n", uiInput, uiMutiply, uiInput * uiMutiply );	
	}
}
