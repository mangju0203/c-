#include <stdio.h>
#define HOUR 3600 
#define MINUTE 60  

typedef unsigned int UINT;

int main(void)
{
	// [1] ���� ���� 
	FILE* fp = fopen("Time.txt", "w"); 

	UINT uiinputSec = 0;
	UINT uiMinute = 0;
	UINT uiHour=0;
	UINT uiSec=0;
	UINT uiTmp=0; //�ӽ� ���� ���� 
	
	// [2] �Է����� ū ���� �ʸ� �޴� �κ�
	printf("Input your sec:\n");
	scanf("%d", &uiinputSec);
	printf("Your input sec is %d\n", uiinputSec);
	fprintf(fp, "Your input sec is %d\n", uiinputSec);
		
	// [3] �Է¹��� ���� �ð� �� ������ ��ȯ
	uiHour = uiinputSec / HOUR; 
	uiTmp = uiinputSec % HOUR;

	uiMinute = uiTmp / MINUTE ;
	uiSec = uiTmp % MINUTE;
	
	//[4] ��� ��� 
	printf("Hour : %d, Minute : % d, Second : %d", uiHour, uiMinute, uiSec);
	fprintf(fp, "Hour : %d, Minute : % d, Second : %d", uiHour, uiMinute, uiSec);

	fclose(fp);
	
	return 0;
}
