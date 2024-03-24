#include <stdio.h>
#define YEAR 31536000
#define DAY 86400
#define HOUR 3600
#define MINUTE 60

typedef unsigned int UINT;

int main(void)
{
	// [1] 변수 선언
	FILE* fp = fopen("Time.txt", "w"); 
	UINT uiinputSec = 0;
	UINT uiMinute = 0;
	UINT uiYear = 0;
	UINT uiDay = 0;
	UINT uiHour=0;
	UINT uiSec=0;
	UINT uiTmp=0; //임시 변수 생성 

	// [2] 입력으로 큰 수의 초를 받는 부분
	printf("Input your sec:\n");
	scanf("%d", &uiinputSec);
	printf("Your input sec is %d\n", uiinputSec);
	fprintf(fp, "Your input sec is %d\n", uiinputSec);

	// [3] 입력받은 수를 시간 및 분으로 반환
	uiYear = uiinputSec / YEAR;
	uiTmp = uiinputSec % YEAR;

	uiDay = uiTmp / DAY;
	uiTmp = uiTmp % DAY;

	uiHour = uiTmp / HOUR;
	uiTmp = uiTmp % HOUR;

	uiMinute = uiTmp / MINUTE ;
	uiSec = uiTmp % MINUTE;
	
	//[4] 결과 출력 
	printf("Year : %d, Day: %d, Hour : %d, Minute : % d, Second : %d",uiYear, uiHour,uiDay, uiMinute, uiSec);
	fprintf(fp, "Hour : %d, Minute : % d, Second : %d",uiYear, uiHour, uiHour, uiMinute, uiSec);
	
	// [5] 파일 닫기 
	fclose(fp);
	
	return 0;
}
