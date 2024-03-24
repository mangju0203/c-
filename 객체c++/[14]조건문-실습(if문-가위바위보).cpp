#include <stdio.h>
#define GAME 3 

// ������ �����ϱ� ���� �ʿ��� ��������� ���� 
#include <stdlib.h>
#include <time.h>

// ���� 0 ���� 1 �� 2 
// ���� �߻� --> ��ǻ���� ��
// ����� ��
// ��ǻ���� ���� ������� ���� ��
// ������ 0, 1, 2 �߿� ���;� �ϹǷ� %3 (3���� ���� ������-> 0, 1, 2) 

typedef unsigned int UINT; // ���� ���� ���� �׻� ������� �����⶧����!!
 
int main(void)
{
	// ----------------------------------
	// ��ǻ�Ϳ� �ϴ� ���������� ����
	// ------------------------------------
	 
	// [1]�������� (����� ��, ��ǻ�� ��)
	UINT uiUser = 0;
	UINT uiComputer = 0;
	
	srand((UINT)time(NULL)); //���� �ٸ� ���� �߻� 
	
	FILE* fp = fopen("GAME.txt", "w");  

	// [2] ������� �� �Է¹ޱ� (����: 0, ����: 1, ��: 2) 
	printf("user number?\n");
	scanf("%d", &uiUser); 
	switch(uiUser)  // switch���� ��Ȯ�� ���� ���� ����� ������ �� 
	{
		case 0:
			printf("����ڴ� ������ �½��ϴ� \n");
			fprintf(fp, "����ڴ� ������ �½��ϴ� \n");
			break;
		case 1:
			printf("����ڴ� ������ �½��ϴ� \n");
			fprintf(fp, "����ڴ� �ٸ� �½��ϴ� \n");
			break;

		case 2:
			printf("����ڴ� ���� �½��ϴ�. \n");
			fprintf(fp, "����ڴ� ���� �½��ϴ�.  \n");
			break;
	}
	// [3] ���� �߻��� ���� ��ǻ���� �� �����ϱ� 
	uiComputer = rand()%GAME; // � ���� 3���� ���� �������� 0, 1, 2�ۿ� �� �����ϱ�!! 
	switch(uiComputer) 
	{
		case 0:
			printf("��ǻ�ʹ� ������ �½��ϴ� \n");
			fprintf(fp, "��ǻ�ʹ� ������ �½��ϴ� \n");
			break;
		case 1:
			printf("��ǻ�ʹ� ������ �½��ϴ� \n");
			fprintf(fp, "��ǻ�ʹ� ������ �½��ϴ� \n");
			break;

		case 2: 
			printf("��ǻ�ʹ� ���� �½��ϴ� \n");
			fprintf(fp, "��ǻ�ʹ� ���� �½��ϴ� \n");
			break;
	}
	
    //[4] ���ǹ��� �̿��ؼ� ���� ���� �� ���� ���
	// ���� 0 ���� 1 �� 2  
	if (uiUser == uiComputer ) // ����� 
	{
		printf("����ڿ� ��ǻ�Ͱ� �����ϴ�.");
		fprintf(fp, "����ڿ� ��ǻ�Ͱ� �����ϴ�.");
	}
	else if ((uiUser +1)%3 == uiComputer )  //��ǻ�Ͱ� �̱� ���  
	{
		printf ("��ǻ�Ͱ� �̰���ϴ� ");
		fprintf (fp, "��ǻ�Ͱ� �̰���ϴ� ");
	}
	else //����ڰ� �̱� ��� 
	{
		printf("����ڰ� �̰���ϴ�. ") ;
		fprintf(fp, "����ڰ� �̰���ϴ�. ") ;
	}
	 
	//[4] ���� �ݱ� 
	fclose(fp);
 
	return 0;
}
