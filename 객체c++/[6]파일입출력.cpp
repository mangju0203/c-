#include <stdio.h>

typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned int UINT;


int main(void)
{
	//���� �����
	char cCharacter=0;
	int iNumber=0;
	float fNumber=0.0;
	
	// [1]���ϻ��� 
	FILE* fp = fopen("Sample.txt", "w");  
	FILE* fp1 = fopen("Text.txt", "w"); 
	
	fprintf(fp, "\n");
	fprintf(fp, "\n");
	fprintf(fp, "\n");
	
	//���ڿ��Է�
	printf("You are the best!\n"); 
	fprintf(fp1, "You are the best!\n"); 
	
	
	
	// ���ڿ� ���� ȭ������� �ǽ� 
	printf("Your favoriate character?\n");
	fprintf(fp, "Your favoriate character\n");
	scanf("%c", &cCharacter);
	
	
	printf("Your favoriate character is %c\n", cCharacter);
	fprintf(fp, "Your favoriate character is %c\n", cCharacter);
	
	
	
	//����(����)�� ���� ȭ������� �ǽ� 
	printf("Your favoriate integer number?\n");
	fprintf(fp, "Your favoriate integer number?\n");
	scanf("%d", &iNumber);
	printf("Your favoriate is %d\n", iNumber);
	fprintf(fp, "Your favoriate is %d\n", iNumber);
	
	//����(�Ǽ�)�� ���� ȭ������� �ǽ� 
	printf("\n");
	fprintf(fp, "\n");
	printf("Your favoriate flaoting number\n");
	fprintf(fp, "Your favoriate flaoting number\n");
	scanf("%f", &fNumber);
	printf("Your favoriate is %.2f\n", fNumber);
	fprintf(fp, "Your favoriate is %.2f\n", fNumber);
	
	//[3]�������� 
	fclose(fp);
	fclose(fp1);
	
	
	return 0;	
}
