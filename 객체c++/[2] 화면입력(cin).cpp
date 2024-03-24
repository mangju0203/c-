#include <iostream>
#include <cstring>
//#include "MyHeader.h"

using namespace std;  // std:: -> C++ 표준에서 정한 표준 이름 공간(iostream 내의 모든 클래스 / 함수에 적용) 
typedef unsigned char UCHAR;
typedef unsigned short USHORT;
typedef unsigned int UINT;
//===============================================================
//사용자 함수 선언 & 정의 .
inline int RectArea (int width, int height)
{
	return width * height ;
}
//===============================================================
int main(void)
{
//	// [1] C++ 화면 입력 "cin"
//	int iNumber = 0;
//	cout << "integer number?" << endl;
//	cout << "integer number is" << iNumber << endl;
//	cout << endl << endl;
//	
//	cout << "integer number?" << endl;
//	cin >> iNumber;   화면으로부터 iNumber 입력받기 
//	cout << "integer number is" << iNumber << endl;
//	cout << endl << endl;
//
//	cout << "integer number is" ;
////	cout << "integer number is" << GetIntNum(1, 10) << endl;
//	cout << endl << endl;
//
//	// [2] 다양한 변수 타입에 따른 화면 입력
//	int iSampple = 0;
//	char cSample = 0;
//	float fSample = 0.0;
//	
//	cin >>  iSampple >> cSample >> fSample;
//	cout << endl << endl;
//	cout << iSampple << endl << cSample << endl << fSample;
//
//	// [3] 사각형 면적 구하기 
//	int  iWidth, iHeight;
//	cout << "Enter width, height.\n";
//	cin >>  iWidth >> iHeight;
//	cout << "The area is" << RectArea(iWidth, iHeight) << endl;

//	// [4] 문자열 화면 입출력
//	char caName[20];
//	
//	cout << "Enter name\n";
//	cin.getline(caName, 20);
//	cout << "Your name is" << caName << "입니다.";
//	
	//[5] 암호 만들기 (암호는 "AI604")
	char cPassword[10];
	cout << "Enter password" << endl;
	while(true)
	{
		cout << "PW:";
		cin >>  cPassword;
		cout << endl << endl;
		
		if( strcmp(cPassword, "AI604") == 0) // strcmp 함수를 사용하여 입력된 비밀번호와 비교 동일하면 0을 반환 
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
