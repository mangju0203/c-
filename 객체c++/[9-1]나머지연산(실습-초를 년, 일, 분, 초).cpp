#include <stdio.h>
#define YEAR 31536000
#define DAY 86400
#define HOUR 3600
#define MINUTE 60

typedef unsigned int UINT;

int main(void)
{
	// [1] ���� ����
	FILE* fp = fopen("Time.txt", "w"); 
	UINT uiinputSec = 0;
	UINT uiMinute = 0;
	UINT uiYear = 0;
	UINT uiDay = 0;
	UINT uiHour=0;
	UINT uiSec=0;
	UINT uiTmp=0; //�ӽ� ���� ���� 

	// [2] �Է����� ū ���� �ʸ� �޴� �κ�
	printf("Input your sec:\n");
	scanf("%d", &uiinputSec);
	printf("Your input sec is %d\n", uiinputSec);
	fprintf(fp, "Your input sec is %d\n", uiinputSec);

	// [3] �Է¹��� ���� �ð� �� ������ ��ȯ
	uiYear = uiinputSec / YEAR;
	uiTmp = uiinputSec % YEAR;

	uiDay = uiTmp / DAY;
	uiTmp = uiTmp % DAY;

	uiHour = uiTmp / HOUR;
	uiTmp = uiTmp % HOUR;

	uiMinute = uiTmp / MINUTE ;
	uiSec = uiTmp % MINUTE;
	
	//[4] ��� ��� 
	printf("Year : %d, Day: %d, Hour : %d, Minute : % d, Second : %d",uiYear, uiHour,uiDay, uiMinute, uiSec);
	fprintf(fp, "Hour : %d, Minute : % d, Second : %d",uiYear, uiHour, uiHour, uiMinute, uiSec);
	
	// [5] ���� �ݱ� 
	fclose(fp);
	
	return 0;
}
