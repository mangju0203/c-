#include <stdio.h>
#include <memory.h>
#define NUMBER 5 

typedef unsigned int UINT; 

// �Լ�����
void GetNumber(void); 

int main(void)
{
	// �л����� ������ �ջ��Ͽ� ����� ���ϴ� ���α׷�//
	
	//[1] ���� �����(�ʱ�ȭ)
	UINT uiScore[NUMBER]; // �迭�� ���� 
	UINT uiIdx = 0; 
	UINT uiSum = 0;
	
	memset(uiScore, 0 , sizeof(UINT)*NUMBER);  // �迭�� �ʱ�ȭ memset(�迭 �̸�, �ʱ�ȭ ��, ũ��) 
//	for(uiIdx=0; uiIdx < NUMBER; uiIdx++)
//	{
//		printf("%d\n", uiScore[uiIdx]);
//	 } 
	
	// �л��� ���� �ջ� �� ��հ�� 
	for(uiIdx=0; uiIdx < NUMBER; uiIdx++)
	{
		printf("%d��° �л��� ������ �Է��ϼ���\n", uiIdx+1);
		scanf("%d", &uiScore[uiIdx]);
		uiSum = uiSum + uiScore[uiIdx];
	} 

	printf("�л����� ������ ������ %d�Դϴ�.", uiSum);

	return 0;
}
