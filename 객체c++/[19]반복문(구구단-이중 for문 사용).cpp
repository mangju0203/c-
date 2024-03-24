#include <stdio.h>
#define GUGUDAN 9 

typedef unsigned int UINT;

// 사용자의 입력 ( 몇 단까지 출력을 할 것인지)
// 이중 for문을 사용하여 1x1부터 사용자가 입력한 단수까지 출력 

int main(void)
{
	//[1] 변수 선언부
	UINT uiInput = 0;
	UINT uiMutiply = 0;
	UINT uiIdx1 = 0;
	UINT uiIdx2 = 0;
	UINT uiDan = 0; 
	FILE* fp = fopen("Gugudan.txt", "w");  
	
	//[2] 화면입출력을 통한 사용자 단수 입력
	printf("원하는 구구단 단수를 입력하시오. \n");
	scanf("%d", &uiInput); // 1단부터 uiInput 단수까지 출력이 되어야함 
	fprintf(fp, "원하는 구구단 단수를 입력하시오: %d\n", uiInput);
	
	//[3] 이중 for문을 통해 구구단을 화면에 출력
	// 아래 for문은 구구단 첫번째 인자에 대한 반복문 (uiInput 단수까지 출력하기위한 반복문) 
	// 사용자가 3을 입력하면 1x1..1x9....3x9까지 나와야함  
	for (uiIdx1=0;uiIdx1<uiInput;uiIdx1++) // uiIdx 는 for문을 반복하기 위한 인덱스일뿡! 
	{
		uiDan++;
		uiMutiply = 0; // uiMutiply 가 9인채로 이 for문을 빠져나오기 떄문에 0으로 초기화 
		// 아래 for문은 구구단 두번째 인자에 대한 반복문 ( x9까지 하기 위한 반복문) 
		for(uiIdx2=0;uiIdx2<GUGUDAN;uiIdx2++)
		{
			uiMutiply++;
			printf("%d x %d = %d \n", uiDan, uiMutiply, uiDan * uiMutiply );	
			fprintf(fp, "%d x %d = %d \n", uiDan, uiMutiply, uiDan * uiMutiply );	
		}
		printf("\n");
		fprintf(fp, "\n");
	} 
		
	fclose(fp);
	return 0;
}

//	for ( ;  ; ) 
//	{
//		for( ; ; )
//		{

//		}
//	} 
