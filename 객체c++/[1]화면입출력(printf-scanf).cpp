#include <stdio.h>

typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned int UINT;


int main(void)
{
	//변수 선언부
	char cCharacter=0; // 변수의 데이터형은 소문자 
	int iNumber=0;		//변수의 이름 첫 스펠링은 대문자로 
	float fNumber=0.0;  //float형은 0.0으로 초기화 
	 
	// 문자에 대한 화면입출력 실습 
	printf("Your favoriate character\n");  //터미널에 출력할 문장 
	scanf("%c", &cCharacter);	// 입력받은 문자를 cCharater에 문자형으로 저장 
	printf("Your favoriate character is %c\n", cCharacter);	

	//숫자에 대한 화면입출력 실습 
	printf("Your favoriate small number\n");
	scanf("%d", &cCharacter);
	printf("Your favoriate small number is %d\n", cCharacter);
	
	//숫자(정수)에 대한 화면입출력 실습 
	printf("Your favoriate integer number?\n");
	scanf("%d", &iNumber);
	printf("Your favoriate integer number is %d\n", iNumber);
	
	//숫자(실수)에 대한 화면입출력 실습 
	printf("\n");
	printf("Your favoriate flaoting number\n");
	scanf("%f", &fNumber);
	printf("Your favoriate floating number is %.2f\n", fNumber);

	return 0;	
}


