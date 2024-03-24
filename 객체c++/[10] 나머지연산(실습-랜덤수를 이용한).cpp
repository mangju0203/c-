#include <stdio.h>
#include <stdlib.h> // 여기에 rand()가 들어있음 
#include <time.h>
#define LOTTO 45 
typedef unsigned int UINT; 

int main(void)
{
	//[1] 변수 선언
	FILE* ft = fopen("lotto.txt", "a"); 
	UINT uiNum1=0;
	UINT uiNum2=0;
	UINT uiNum3=0;
	UINT uiNum4=0;
	UINT uiNum5=0;
	UINT uiNum6=0;
		
	//[2] 로또 번호 생성
	srand((UINT)time(NULL));
	uiNum1 = rand()%LOTTO + 1;
	uiNum2 = rand()%LOTTO + 1;
	uiNum3 = rand()%LOTTO + 1;
	uiNum4 = rand()%LOTTO + 1;
	uiNum5 = rand()%LOTTO + 1;
	uiNum6 = rand()%LOTTO + 1;
	
	//[3] 결과 출력
	printf("number1: %d, number2: %d,number1: %d,number3: %d,number4: %d,number5: %d, number6: %d\n", uiNum1, uiNum2, uiNum3, uiNum4, uiNum5, uiNum6); 
	fprintf(ft, "number1: %d, number2: %d,number1: %d,number3: %d,number4: %d,number5: %d, number6 : %d\n", uiNum1, uiNum2, uiNum3, uiNum4, uiNum5, uiNum6); 

	fclose(ft);
			 
	return 0;
}
