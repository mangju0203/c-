#include <stdio.h>
#define PI 3.141592 

int main(void)
{	
	//[1]�������� 
	float fRadius = 0.0;
	float fArea = 0.0;
	float fLength = 0.0;
	
	//[2]�������Է¹ޱ� 
	printf("intput radius?\n");
	scanf("%f", &fRadius);
	
	//[3]�������� ���� ��� 
	fArea = fRadius * PI * PI;
	fLength = fRadius * PI * 2;
	
	//[4]ȭ����� 
	printf("area is %.2f\n", fArea);
	printf("length is %.2f", fLength);
	
	return 0;
}
