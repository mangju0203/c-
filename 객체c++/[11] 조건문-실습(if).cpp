#include <stdio.h>
#define GRADE 2.5
#define TOEIC 300 
 
typedef unsigned int UINT;

int main(void)
{
	// [1] ��������
	float fGrade=0.0;
	UINT uiToeic=0;
	UINT uiService=0;
	
	//[2] ����, ����, �������� �Է¹ޱ�
	printf("Grade?");
	scanf("%f", &fGrade);
	
	printf("Toeic?");
	scanf("%d", &uiToeic);
	
	printf("Service?"); //0: ����Ȱ�� x, 1: ����Ȱ��o 
	scanf("%d", &uiService);
	
	//[3] ���ǹ�(if)�� ���� �� ����ڰ� ���� �������� Ȯ�� 
	if ((fGrade >= GRADE) && (uiToeic >= TOEIC))
	{
		printf("����� �� ȸ�翡 ���������մϴ�~");
	}
	else if(uiService == 1) //���� '==' 
	{ 
		printf("��ŵ� �� ȸ�翡 ���������մϴ�~");
	}
	else{
		printf("����� ��������!");
	} 
	
	return 0;
}

//
//	if ()
//	{		
//	}
//	else if() 
//	{ 
//	}
//	else
//  {
//	} 
//	
