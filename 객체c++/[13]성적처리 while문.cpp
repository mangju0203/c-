//출석 20% 중간 40% 기말 40% 
#include <stdio.h>

#define ATTEND 0.2 
#define MID 0.4
#define FINAL 0.4
#define MINIMUM 0
#define MAXIMUM 100

int main(void)
{
	//[1] 변수선언
	float fAttend = 0.0;
	float fMidTest = 0.0;
	float fFinalTest = 0.0;
	float fFinal = 0.0;
	char cGrade = 0;
	bool bCheck =1;
	
	
	while(bCheck)
	{
		printf("Your attend score?\n");
		scanf("%f", &fAttend);
		
		if((fAttend<MINIMUM) || (fAttend > MAXIMUM)) 
		{
			printf("Error, Try again: (0<= input <= 100)\n");
		}
		else
		{
			printf("Your attend is %.2f\n", fAttend);
			bCheck = 0;
		}
	  
	 
	 
	
		printf("Your midtest score?\n");
		scanf("%f", &fMidTest);
		
		if((fMidTest<MINIMUM) || (fMidTest > MAXIMUM)) 
		{
			printf("Error, Try again: (0<= input <= 100)\n");
		}
		else
		{
			printf("Your MidTest is %.2f\n", fMidTest);
			bCheck = 0;
		}
	 
		
		
		printf("Your final test score ?\n");
		scanf("%f", &fFinalTest);
		
		if((fAttend<MINIMUM) || (fAttend > MAXIMUM)) 
		{
			printf("Error, Try again: (0<= input <= 100)\n");
		}
		else
		{
			printf("Your FinalTest is %.2f\n", fFinalTest);
			bCheck = 0;
		}
	}		
		
	fFinal = fAttend * 0.2 + fMidTest *0.4 + fFinalTest * 0.4;
	
	if (fFinal >= 90)
		printf("Your final grade: a");
	

		
	else if (fFinal>=80)
		printf("Your final grade: b");
		

		
	else if (fFinal>=70 )
		printf("Your final grade: c");
		
		
	else if (fFinal>=60 )
		printf("Your final grade: d");
	
		
	else 
		printf("Your final grade: f");
		
		
return 0;

}
