#include <stdio.h>
#define GUGUDAN 9

typedef unsigned int UINT;

// ������� �Է� ( �� �ܱ��� ����� �� ������)
// ���� for���� ����Ͽ� 1�ܺ��� 1x1���� ������� �Է��� �ܼ����� ��� 

int main(void)
{
	//[1] ���� �����
	UINT uiInput = 0;
	UINT uiMutiply = 0;
	UINT uiIdx1 = 0;
	UINT uiIdx2 = 0;
	UINT uiDan = 0; 
	
	//[2] ���� for���� ���� �������� ȭ�鿡 ���
	// �Ʒ� for���� ������ ù��° ���ڿ� ���� �ݺ��� (uiInput �ܼ����� ����ϱ����� �ݺ���) 
	for (uiIdx1=0;uiIdx1<GUGUDAN;uiIdx1++) // uiIdx �� for���� �ݺ��ϱ� ���� �ε����ϻ�! 
	{
		uiDan++;
		uiMutiply = 0; // uiMutiply �� 9��ä�� �� for���� ���������� ������ 0���� �ʱ�ȭ 
				
		// �Ʒ� for���� ������ �ι�° ���ڿ� ���� �ݺ��� ( x9���� �ϱ� ���� �ݺ���) 
		for(uiIdx2=0;uiIdx2<GUGUDAN;uiIdx2++)
		{
			uiMutiply++;
						 
			printf("%d x %d = %d \n", uiDan, uiMutiply, uiDan * uiMutiply );	
			
			// ���return ����: 7*8=56�� �Է��ϰ� ���α׷� ���� 
			if((uiDan==7) && (uiMutiply==8))
			{
				return 0;
			}
		}
		printf("\n"); // �� �ܺ��� �� �ٲٱ�  
	}
	return 0;
}



//	for ( ; ; )  
//	{		
//		for ( ; ; )  
//		{
//			printf(  );	

//			if(�ڵ� �ߴ� ��� )
//			{
//				return 0;
//			}
//		}
//	}
