#include <iostream>
#include <cstring>
//#include "MyHeader.h"

using namespace std;  // std:: -> C++ ǥ�ؿ��� ���� ǥ�� �̸� ����(iostream ���� ��� Ŭ���� / �Լ��� ����) 
typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned int UINT;
//===============================================================
//����� �Լ� ���� & ���� .
inline int RectArea (int width, int height)
{
	return width * height ;
}
//===============================================================
int main(void)
{
//	// [1] C++ ȭ�� �Է� "cin"
//	int iNumber = 0;
//	cout << "integer number?" << endl;
//	cout << "integer number is" << iNumber << endl;
//	cout << endl << endl;
//	
//	cout << "integer number?" << endl;
//	cin >> iNumber;   ȭ�����κ��� iNumber �Է¹ޱ� 
//	cout << "integer number is" << iNumber << endl;
//	cout << endl << endl;
//
//	cout << "integer number is" ;
////	cout << "integer number is" << GetIntNum(1, 10) << endl;
//	cout << endl << endl;
//
//	// [2] �پ��� ���� Ÿ�Կ� ���� ȭ�� �Է�
//	int iSampple = 0;
//	char cSample = 0;
//	float fSample = 0.0;
//	
//	cin >>  iSampple >> cSample >> fSample;
//	cout << endl << endl;
//	cout << iSampple << endl << cSample << endl << fSample;
//
//	// [3] �簢�� ���� ���ϱ� 
//	int  iWidth, iHeight;
//	cout << "Enter width, height.\n";
//	cin >>  iWidth >> iHeight;
//	cout << "The area is" << RectArea(iWidth, iHeight) << endl;

//	// [4] ���ڿ� ȭ�� �����
//	char caName[20];
//	
//	cout << "Enter name\n";
//	cin.getline(caName, 20);
//	cout << "Your name is" << caName << "�Դϴ�.";
//	
	//[5] ��ȣ ����� (��ȣ�� "AI604")
	char cPassword[10];
	cout << "Enter password" << endl;
	while(true)
	{
		cout << "PW:";
		cin >>  cPassword;
		cout << endl << endl;
		
		if( strcmp(cPassword, "AI604") == 0) // strcmp �Լ��� ����Ͽ� �Էµ� ��й�ȣ�� �� �����ϸ� 0�� ��ȯ 
		{
			cout << "start";
			break;
		}
		else
		{
			cout << "try again\n";
		}
		
	}
	
	return 0;
}
