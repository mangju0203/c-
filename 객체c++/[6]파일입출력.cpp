#include <stdio.h>

typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned int UINT;


int main(void)
{
	//변수 선언부
	char cCharacter=0;
	int iNumber=0;
	float fNumber=0.0;
	
	// [1]파일생성 
	FILE* fp = fopen("Sample.txt", "w");  
	FILE* fp1 = fopen("Text.txt", "w"); 
	
	fprintf(fp, "\n");
	fprintf(fp, "\n");
	fprintf(fp, "\n");
	
	//문자열입력
	printf("You are the best!\n"); 
	fprintf(fp1, "You are the best!\n"); 
	
	
	
	// 문자에 대한 화면입출력 실습 
	printf("Your favoriate character?\n");
	fprintf(fp, "Your favoriate character\n");
	scanf("%c", &cCharacter);
	
	
	printf("Your favoriate character is %c\n", cCharacter);
	fprintf(fp, "Your favoriate character is %c\n", cCharacter);
	
	
	
	//숫자(정수)에 대한 화면입출력 실습 
	printf("Your favoriate integer number?\n");
	fprintf(fp, "Your favoriate integer number?\n");
	scanf("%d", &iNumber);
	printf("Your favoriate is %d\n", iNumber);
	fprintf(fp, "Your favoriate is %d\n", iNumber);
	
	//숫자(실수)에 대한 화면입출력 실습 
	printf("\n");
	fprintf(fp, "\n");
	printf("Your favoriate flaoting number\n");
	fprintf(fp, "Your favoriate flaoting number\n");
	scanf("%f", &fNumber);
	printf("Your favoriate is %.2f\n", fNumber);
	fprintf(fp, "Your favoriate is %.2f\n", fNumber);
	
	//[3]파일종료 
	fclose(fp);
	fclose(fp1);
	
	
	return 0;	
}
