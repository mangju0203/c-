#include <stdio.h>
#define GRADE 2.5
#define TOEIC 300 
 
typedef unsigned int UINT;

int main(void)
{
	// [1] 변수생성
	float fGrade=0.0;
	UINT uiToeic=0;
	UINT uiService=0;
	
	//[2] 학점, 봉사, 토익점수 입력받기
	printf("Grade?");
	scanf("%f", &fGrade);
	printf("Toeic?");
	scanf("%d", &uiToeic);
	printf("Service?");
	scanf("%d", &uiService);
	
	//[3] 조건문 생성 
	if ((fGrade >= GRADE)&&(uiToeic >= TOEIC)){
		printf("당신은 이 회사에 지원가능합니다~");
	}
	else if(uiService == 1){
		printf("당신도 이 회사에 지원가능합니다~");
	}
	else{
		printf("당신은 지원못해!");
	} 
	
	return 0;
}
