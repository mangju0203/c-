#include <stdio.h>

typedef unsigned int UINT;
//===========================================================================//
// 본 프로그램은 구구단을 확장하여 최대 AxB를 출력하는 코드
// 이때 A는 첫번째 수, B는 두번째 수에 해당(1x1 ~ AxB) 
// 사용자에게 A,B를 입력받는 함수와 화면에 구구단을 출력하는 함수가 필요 
//==========================================================================//
// (1) 함수 선언 
int GetNumber(void); // 사용자에게 숫자 2개를 입력받는 함수 
void Display(int First, int Second);  // 사용자에게 입력받은 숫자로 화면에 구구단 출력하는 함수 

int main(void)
{
	//[1] 변수 선언부
	UINT uiInput = 0;     // 첫번째 단수 A 
	UINT uiInput2 = 0;    // 두번째 단수 B 
	
	//[2] 화면입출력을 통한 사용자 단수 입력(함수호출) 
	uiInput = GetNumber();  // GetNumber함수를 호출해 입력받은 uiUserInput 값을 uiInput에 저장 
	uiInput2 = GetNumber(); // GetNumber함수를 호출해 입력받은 uiUserInput 값을 uiInput2에 저장 

	//[3] 이중 for문을 통해 구구단을 화면에 출력
	Display(uiInput, uiInput2);
	 
	return 0;
}

// (2) 함수 정의
// 화면으로부터 uiUserInput 값을 입력받아 int타입으로 반환 
int GetNumber(void) 
{
	UINT uiUserInput = 0;
	
	printf("원하는 수를 입력하시오. \n");
	scanf("%d", &uiUserInput);
		
	return uiUserInput;
}

void Display(int First, int Second)
{
	UINT uiMutiply = 0;
	UINT uiIdx1 = 0;
	UINT uiIdx2 = 0;
	UINT uiDan = 0; 
	
	// 사용자가 3을 입력하면 1x1..1x9....3x9까지 나와야함  
	for (uiIdx1=0;uiIdx1<First;uiIdx1++) // uiIdx 는 for문을 반복하기 위한 인덱스일뿡! 
	{
		uiDan++;
		uiMutiply = 0; // uiMutiply 가 9인채로 이 for문을 빠져나오기 떄문에 0으로 초기화 
		
		// 아래 for문은 구구단 두번째 인자에 대한 반복문 ( x9까지 하기 위한 반복문) 
		for(uiIdx2=0;uiIdx2<Second;uiIdx2++)
		{
			uiMutiply++;
			printf("%d x %d = %d \n", uiDan, uiMutiply, uiDan * uiMutiply );				
		}
		
		printf("\n");	 
	}
}
