#include <stdio.h>
#define EXCHANGE_RATE 1350

typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned int UINT;

int main(void)
{
	// [1] 변수 선언부
	UINT uiDays=0;
	UINT uiAirPRice=0;
	UINT uiHotelPrice=0;
	UINT uiPocketMoney=0;
	UINT uiTotalPrice=0;
	float fUSD=0.0;
	
	// [2] trip 파일생성 
	FILE* ft = fopen("trip.txt", "w"); 
	
	// 파일에 공백 만들기 
	fprintf(ft, "\n");
	fprintf(ft, "\n");
	fprintf(ft, "\n");
	
	// [3] 화면으로부터 값 입력받기 & 파일에 입력하기 
	printf("How long stay?\n");
	fprintf(ft, "How long stay?\n");
	scanf("%d", &uiDays);
	fprintf(ft, "%d\n", uiDays);
	
	printf("how much is Airpice?\n");
	fprintf(ft, "how much is Airpice?\n");
	scanf("%d", &uiAirPRice);
	fprintf(ft, "%d\n", uiAirPRice);
	
	printf("how much is hotel price?\n");
	fprintf(ft, "how much is hotel price?\n");
	scanf("%d", &uiHotelPrice);
	fprintf(ft, "%d\n", uiHotelPrice);
	
	printf("how much is pocketmoney?\n");
	fprintf(ft, "how much is pocketmoney?\n");
	scanf("%d", &uiPocketMoney);
	fprintf(ft, "%d\n", uiPocketMoney);
	
	// [4] 여행 경비 계산 & 파일에 출력 
	uiTotalPrice = uiAirPRice * 2 + uiHotelPrice * uiDays + uiPocketMoney * uiDays;
	printf("total price = %d\n", uiTotalPrice);
	fprintf(ft, "totalprice = %d\n", uiTotalPrice);
	
	
	// [5] 경비 달러로 바꾸기
	fUSD = (float)uiTotalPrice/EXCHANGE_RATE;
	printf("total USD = %.2f\n", fUSD);
	fprintf(ft, "Total usd = %.2f\n", fUSD);
	
	//[6]파일종료 
	fclose(ft);
			
	return 0;	
}
