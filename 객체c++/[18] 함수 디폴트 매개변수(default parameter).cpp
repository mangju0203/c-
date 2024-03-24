#include <iostream>
using namespace std;  // std:: -> C++ ǥ�ؿ��� ���� ǥ�� �̸� ����(iostream ���� ��� Ŭ���� / �Լ��� ����) 

inline int GetRectArea1 (int width=10, int height=10)
{
	return width*height;
}

int GetRectArea2 (int width, int height=10)
{
	return width*height;
}
//-----------------------------------------------------------------------------
//[C++ ��� �Լ�] 
//(Step1) ����Ʈ �Ű�����
// �Լ��� �Ű����� ���� ���޵��� �ʴ� ���, ����Ʈ ���� ���޵ǵ��� �Լ� ���� 
//-----------------------------------------------------------------------------

int main()
{
	int iWidth = 100;
	int iHeight = 200;
	cout << "Rect Area: " << GetRectArea1(iWidth, iHeight) << endl;     // GetRectAreal(100,200)
	cout << "Rect Area: " << GetRectArea1() << endl;                    // GetRectAreal(10,10)
	cout << "Rect Area: " << GetRectArea1(5) << endl;					// GetRectAreal(5,10)
	cout << "Rect Area: " << GetRectArea1(5, 7) << endl;				// GetRectAreal(5,7)
	
	// (����) ����Ʈ �Ű������� ��� �� �ʿ� ���� ���� 
	cout << endl << endl;
	//cout << "Rect Area: " << GetRectArea2() << endl;                    // Error
	cout << "Rect Area: " << GetRectArea2(5) << endl;                    // GetRectArea2(5,10)
	cout << "Rect Area: " << GetRectArea2(5, 100) << endl;               // GetRectArea2(5,100)
	

	return 0;
}
