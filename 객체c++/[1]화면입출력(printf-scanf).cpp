#include <stdio.h>

typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned int UINT;


int main(void)
{
	//���� �����
	char cCharacter=0; // ������ ���������� �ҹ��� 
	int iNumber=0;		//������ �̸� ù ���縵�� �빮�ڷ� 
	float fNumber=0.0;  //float���� 0.0���� �ʱ�ȭ 
	 
	// ���ڿ� ���� ȭ������� �ǽ� 
	printf("Your favoriate character\n");  //�͹̳ο� ����� ���� 
	scanf("%c", &cCharacter);	// �Է¹��� ���ڸ� cCharater�� ���������� ���� 
	printf("Your favoriate character is %c\n", cCharacter);	

	//���ڿ� ���� ȭ������� �ǽ� 
	printf("Your favoriate small number\n");
	scanf("%d", &cCharacter);
	printf("Your favoriate small number is %d\n", cCharacter);
	
	//����(����)�� ���� ȭ������� �ǽ� 
	printf("Your favoriate integer number?\n");
	scanf("%d", &iNumber);
	printf("Your favoriate integer number is %d\n", iNumber);
	
	//����(�Ǽ�)�� ���� ȭ������� �ǽ� 
	printf("\n");
	printf("Your favoriate flaoting number\n");
	scanf("%f", &fNumber);
	printf("Your favoriate floating number is %.2f\n", fNumber);

	return 0;	
}


