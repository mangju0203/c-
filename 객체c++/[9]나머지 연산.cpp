#include <stdio.h>
#define HOUR 3600 
#define MINUTE 60  

typedef unsigned int UINT;

int main(void)
{
	// [1] 변수 선언 
	FILE* fp = fopen("Time.txt", "w"); 

	UINT uiinputSec = 0;
	UINT uiMinute = 0;
	UINT uiHour=0;
	UINT uiSec=0;
	UINT uiTmp=0; //임시 변수 생성 
	
	// [2] 입력으로 큰 수의 초를 받는 부분
	printf("Input your sec:\n");
	scanf("%d", &uiinputSec);
	printf("Your input sec is %d\n", uiinputSec);
	fprintf(fp, "Your input sec is %d\n", uiinputSec);
		
	// [3] 입력받은 수를 시간 및 분으로 반환
	uiHour = uiinputSec / HOUR; 
	uiTmp = uiinputSec % HOUR;

	uiMinute = uiTmp / MINUTE ;
	uiSec = uiTmp % MINUTE;
	
	//[4] 결과 출력 
	printf("Hour : %d, Minute : % d, Second : %d", uiHour, uiMinute, uiSec);
	fprintf(fp, "Hour : %d, Minute : % d, Second : %d", uiHour, uiMinute, uiSec);

	fclose(fp);
	
	return 0;
}
