#include <stdio.h>
#define GAME 3 

// 난수를 생성하기 위해 필요한 헤더파일을 정의 
#include <stdlib.h>
#include <time.h>

// 가위 0 바위 1 보 2 
// 난수 발생 --> 컴퓨터의 수
// 사용자 수
// 컴퓨터의 수와 사용자의 수를 비교
// 난수가 0, 1, 2 중에 나와야 하므로 %3 (3으로 나눈 나머지-> 0, 1, 2) 

typedef unsigned int UINT; // 가위 바위 보는 항상 양수만을 가지기때문에!!
 
int main(void)
{
	// ----------------------------------
	// 컴퓨터와 하는 가위바위보 게임
	// ------------------------------------
	 
	// [1]변수선언 (사용자 값, 컴퓨터 값)
	UINT uiUser = 0;
	UINT uiComputer = 0;
	
	srand((UINT)time(NULL)); //서로 다른 난수 발생 
	
	FILE* fp = fopen("GAME.txt", "w");  

	// [2] 사용자의 값 입력받기 (가위: 0, 바위: 1, 보: 2) 
	printf("user number?\n");
	scanf("%d", &uiUser); 
	switch(uiUser)  // switch문은 정확한 값에 따라서 결과가 나오는 것 
	{
		case 0:
			printf("사용자는 가위를 냈습니다 \n");
			fprintf(fp, "사용자는 가위를 냈습니다 \n");
			break;
		case 1:
			printf("사용자는 바위를 냈습니다 \n");
			fprintf(fp, "사용자는 바를 냈습니다 \n");
			break;

		case 2:
			printf("사용자는 보를 냈습니다. \n");
			fprintf(fp, "사용자는 보를 냈습니다.  \n");
			break;
	}
	// [3] 난수 발생을 통해 컴퓨터의 값 생성하기 
	uiComputer = rand()%GAME; // 어떤 수를 3으로 나눈 나머지는 0, 1, 2밖에 안 나오니까!! 
	switch(uiComputer) 
	{
		case 0:
			printf("컴퓨터는 가위를 냈습니다 \n");
			fprintf(fp, "컴퓨터는 가위를 냈습니다 \n");
			break;
		case 1:
			printf("컴퓨터는 바위를 냈습니다 \n");
			fprintf(fp, "컴퓨터는 바위를 냈습니다 \n");
			break;

		case 2: 
			printf("컴퓨터는 보를 냈습니다 \n");
			fprintf(fp, "컴퓨터는 보를 냈습니다 \n");
			break;
	}
	
    //[4] 조건문을 이용해서 승패 결정 후 파일 출력
	// 가위 0 바위 1 보 2  
	if (uiUser == uiComputer ) // 비긴경우 
	{
		printf("사용자와 컴퓨터가 비겼습니다.");
		fprintf(fp, "사용자와 컴퓨터가 비겼습니다.");
	}
	else if ((uiUser +1)%3 == uiComputer )  //컴퓨터가 이긴 경우  
	{
		printf ("컴퓨터가 이겼습니다 ");
		fprintf (fp, "컴퓨터가 이겼습니다 ");
	}
	else //사용자가 이긴 경우 
	{
		printf("사용자가 이겼습니다. ") ;
		fprintf(fp, "사용자가 이겼습니다. ") ;
	}
	 
	//[4] 파일 닫기 
	fclose(fp);
 
	return 0;
}
