#include <stdio.h>
#include <memory.h>
#define NUMBER 5 

typedef unsigned int UINT; 

int main(void)
{
	// �л����� ������ �ջ��Ͽ� ����� ���ϴ� ���α׷�
	
	
	//[1] ���� �����(�ʱ�ȭ)
	UINT uiScore[NUMBER];
	UINT uiIdx = 0;
	for(uiIdx=0; uiIdx < NUMBER; uiIdx++)
	{
		printf("%d", uiScore[uiIdx]);
	 } 
	memset(uiScore, 0, sizeof(UINT)*NUMBER);  // memset(�迭 �̸�, �ʱ�ȭ ��, ũ��) 
	
	return 0;
}
