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
	// �Ʒ� for���� ������ ù��° ���ھ� ���� �ݺ��� (uiInput �ܼ����� ����ϱ����� �ݺ���) 
	for (uiIdx1=0;uiIdx1<GUGUDAN;uiIdx1++) // uiIdx �� for���� �ݺ��ϱ� ���� �ε����ϻ�! 
	{
		uiDan++;
		uiMutiply = 0; // uiMutiply �� 9��ä�� �� for���� ���������� ������ 0���� �ʱ�ȭ 
		
		//��� continue ����(1): Ȧ�� �ܸ� �������� ��� 
		if((uiDan%2)==0) // ����  uiDan�� ¦���̸� �ٽ� ���� for������ �ö󰡶�~ 
		{
			continue;
		} 
		// �Ʒ� for���� ������ �ι�° ���ڿ� ���� �ݺ��� ( x9���� �ϱ� ���� �ݺ���) 
		for(uiIdx2=0;uiIdx2<GUGUDAN;uiIdx2++)
		{
			uiMutiply++;
			
			// ���continue ����: �� �ܺ���uiMutiply�� ¦���� �����ֱ� 
			if((uiMutiply%2)==1) //uiMutiply�� ¦����� ���� �ö󰡱� 
			{
				continue;
			} 
			 
			printf("%d x %d = %d \n", uiDan, uiMutiply, uiDan * uiMutiply );	
		}
		printf("\n"); // �� �ܺ��� �� �ٲٱ�  
	} 
	return 0;
}


//	for ( ; ; ) 
//	{
//		if(������� ���� �κ� ) 
//		{
//			continue;
//		} 
//		for ( ; ; ) 
//		{
//			if(������� ���� �κ� ) 
//			{
//				continue;
//			} 
//			printf( );	
//		}
//	} 
