#include <stdio.h>
#define PI 3.141592 

int main(void)
{	
	//[1]변수생성 
	float fRadius = 0.0;
	float fArea = 0.0;
	float fLength = 0.0;
	
	//[2]반지름입력받기 
	printf("intput radius?\n");
	scanf("%f", &fRadius);
	
	//[3]원면적과 원주 계산 
	fArea = fRadius * PI * PI;
	fLength = fRadius * PI * 2;
	
	//[4]화면출력 
	printf("area is %.2f\n", fArea);
	printf("length is %.2f", fLength);
	
	return 0;
}
