//출석 20% 중간 40% 기말 40% 
#include <stdio.h>

#define ATTEND 0.2 
#define MID 0.4
#define FINAL 0.4

int main(void)
{
	//[1] 변수선언
	float fAttend = 0.0;
	float fMidTest = 0.0;
	float fFinalTest = 0.0;
	float fFinal = 0.0;
	char cGrade = 0;
	FILE* fp = fopen("Grade.txt", "w");
	
	//[2] 각 영역별 점수를 입력받은 후 최종점수 계산 
	printf("Your attend score?\n");
	scanf("%f", &fAttend);
	fprintf(fp,"Yout attend score:%.2f\n",fAttend);
	
	printf("Your midtest score?\n");
	scanf("%f", &fMidTest);
	fprintf(fp,"Yout midtest score:%.2f\n",fMidTest);

	printf("Your final test score ?\n");
	scanf("%f", &fFinalTest);
	fprintf(fp,"Yout final test score:%.2f\n",fFinalTest);

	fFinal = fAttend * 0.2 + fMidTest *0.4 + fFinalTest * 0.4;
	printf("Final score = %.2f\n", fFinal);
	fprintf(fp,"Yout final score:%.2f\n",fFinal);
	
	//[3] 조건문을 이용하여 성적 부여  
	if (fFinal >= 90)
	{
		printf("Your final grade: a");
		fprintf(fp,"Your final grade: a");
	}
		
	else if (fFinal>=80)
	{
		printf("Your final grade: b");
		fprintf(fp,"Your final grade: b");
	}
		
	else if (fFinal>=70 )
	{
		printf("Your final grade: c");
		fprintf(fp,"Your final grade: c");
	}
	
	else if (fFinal>=60 )
	{
		printf("Your final grade: d");
		fprintf(fp,"Your final grade: d");
	}
		
	else 
	{
		printf("Your final grade: f");
		fprintf(fp,"Your final grade: f");
    }
		
	fclose(fp);
		
return 0;

}
