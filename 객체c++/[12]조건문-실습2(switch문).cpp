#include <stdio.h>
#include <stdlib.h> // ���⿡ rand()�� ������� 
#include <time.h>
#define Day 7

typedef unsigned int UINT;

int main(void)
{
	//[1] ��������
	UINT uiDays=0;
	srand((UINT)time(NULL)); // �� ���� �� ������ �ٸ��� ������
	uiDays = rand()%Day + 1; 

	//[2] ����ڿ��� ���� �Է¹ޱ�
//	printf("Input number\n");
//	scanf("%d", &uiDays); 
	
	//[3]���ǹ�
	switch(uiDays) 
	{
		case 1:
			printf("������ \n");
			break;
		case 2:
			printf("ȭ���� \n");
			break;

		case 3:
			printf("������ \n");
			break;

		case 4:
			printf("����� \n");
			break;
			
		case 5:
			printf("�ݿ��� \n");
			break;
			
		case 6:
			printf("����� \n");
			break;
		case 7:
			printf("�Ͽ��� \n");
			break;
			
		default:
			break; 
	}
 	return 0;
}
//
//
//	switch(xxx) 
//	{
//		case 1:
//			break;
//		case 2:
//			break;
//
//		case 3:
//			break;
//
//		case 4:
//			break;
//			
//		case 5:
//			break;
//			
//		case 6:
//			break;
//		case 7:
//			break;
//			
//		default:
//			break; 
//			
//	}
// 
//	
//
