#include <stdio.h>
#include <memory.h>
#define NUMBER 5 


typedef unsigned int UINT; 

// �Լ� ���� 
int Sum(UINT* Scores);  // �迭�� �л����� ������ score�� �޾ƾ��ϹǷ� �Է����ڿ� int* Scores�� �ۼ� 

int main(void)
{

	
	
	//[1] ���� �����(�ʱ�ȭ)
	UINT uiSum = 0;
	float fAvg = 0.0;
	UINT aiScore[NUMBER]; // ũ�Ⱑ NUMBER�� �迭 aiScore�� ���� 
	memset(aiScore, 0, sizeof(UINT)*NUMBER); 
		
  
    // �Լ� ȣ��  
	uiSum = Sum(aiScore);  // ���� �Լ� ����κп� �Է����ڿ� �迭�� �����ϴϱ� �Է����ڿ� �迭�� aiScore�� �־��� 
	
	
	// �ջ�� ������ ���� ��� ���ϱ� 
	fAvg = (float)uiSum / NUMBER;
	printf("Average = %.2f\n", fAvg);
	
	return 0;
}


// �Լ� ���� (�Լ� ȣ�� �κп��� �����ݷи� ���ָ� ��) 
// �迭�� �Է��� �־���� 
int Sum(UINT* Scores) 
{
	
	UINT uiIdx = 0;
	UINT uiSum = 0;
	for(uiIdx=0; uiIdx < NUMBER; uiIdx++)  
	{
		printf("%d��° �л��� ������ �Է��ϼ���>> \n", uiIdx+1);
		scanf("%d", &Scores[uiIdx]); //aiScore�迭���� �л� 5���� ���� �� �ԷµǾ� ���� 	
		uiSum = uiSum + Scores[uiIdx];
	} 
	printf("�л� %d���� ���� ������ %d ���Դϴ�.\n\n", uiIdx, uiSum);
	
	return uiSum;
}

