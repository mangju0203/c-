#include <stdio.h>
#define EXCHANGE_RATE 1350

typedef unsigned int UINT; 

int main(void)
{
	// [1] �������� 
	UINT uiDays=0;
	UINT uiAirPRice=0;
	UINT uiHotelPrice=0;
	UINT uiPocketMoney=0;
	UINT uiTotalPrice=0;
	float fUSD=0.0;
	
	// [2] �Է¹ޱ� 
	printf("How long stay?\n");
	scanf("%d", &uiDays);
	printf("how much is Airpice?\n");
	scanf("%d", &uiAirPRice);
	printf("how much is hotel price?\n");
	scanf("%d", &uiHotelPrice);
	printf("how much is pocketmoney?\n");
	scanf("%d", &uiPocketMoney);
	
	
	
	// [3] ��� ����ϰ� �� ��� ��� 
	uiTotalPrice = uiAirPRice * 2 + uiHotelPrice * uiDays + uiPocketMoney * uiDays;
	printf("Your totalprice = %d\n", uiTotalPrice);
	
	
	// [4] ��� �޷��� �ٲٰ� ȭ�� ��� 
	fUSD = (float)uiTotalPrice/EXCHANGE_RATE;
	printf("Total usd = %.2f", fUSD);
	
	return 0;
}
