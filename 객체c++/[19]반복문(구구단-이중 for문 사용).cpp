#include <stdio.h>
#define GUGUDAN 9 

typedef unsigned int UINT;

// ������� �Է� ( �� �ܱ��� ����� �� ������)
// ���� for���� ����Ͽ� 1x1���� ����ڰ� �Է��� �ܼ����� ��� 

int main(void)
{
	//[1] ���� �����
	UINT uiInput = 0;
	UINT uiMutiply = 0;
	UINT uiIdx1 = 0;
	UINT uiIdx2 = 0;
	UINT uiDan = 0; 
	FILE* fp = fopen("Gugudan.txt", "w");  
	
	//[2] ȭ��������� ���� ����� �ܼ� �Է�
	printf("���ϴ� ������ �ܼ��� �Է��Ͻÿ�. \n");
	scanf("%d", &uiInput); // 1�ܺ��� uiInput �ܼ����� ����� �Ǿ���� 
	fprintf(fp, "���ϴ� ������ �ܼ��� �Է��Ͻÿ�: %d\n", uiInput);
	
	//[3] ���� for���� ���� �������� ȭ�鿡 ���
	// �Ʒ� for���� ������ ù��° ���ڿ� ���� �ݺ��� (uiInput �ܼ����� ����ϱ����� �ݺ���) 
	// ����ڰ� 3�� �Է��ϸ� 1x1..1x9....3x9���� ���;���  
	for (uiIdx1=0;uiIdx1<uiInput;uiIdx1++) // uiIdx �� for���� �ݺ��ϱ� ���� �ε����ϻ�! 
	{
		uiDan++;
		uiMutiply = 0; // uiMutiply �� 9��ä�� �� for���� ���������� ������ 0���� �ʱ�ȭ 
		// �Ʒ� for���� ������ �ι�° ���ڿ� ���� �ݺ��� ( x9���� �ϱ� ���� �ݺ���) 
		for(uiIdx2=0;uiIdx2<GUGUDAN;uiIdx2++)
		{
			uiMutiply++;
			printf("%d x %d = %d \n", uiDan, uiMutiply, uiDan * uiMutiply );	
			fprintf(fp, "%d x %d = %d \n", uiDan, uiMutiply, uiDan * uiMutiply );	
		}
		printf("\n");
		fprintf(fp, "\n");
	} 
		
	fclose(fp);
	return 0;
}

//	for ( ;  ; ) 
//	{
//		for( ; ; )
//		{

//		}
//	} 
