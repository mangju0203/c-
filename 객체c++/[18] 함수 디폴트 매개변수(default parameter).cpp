#include <iostream>
using namespace std;  // std:: -> C++ 표준에서 정한 표준 이름 공간(iostream 내의 모든 클래스 / 함수에 적용) 

inline int GetRectArea1 (int width=10, int height=10)
{
	return width*height;
}

int GetRectArea2 (int width, int height=10)
{
	return width*height;
}
//-----------------------------------------------------------------------------
//[C++ 언어 함수] 
//(Step1) 디폴트 매개변수
// 함수에 매개변수 값이 전달되지 않는 경우, 디폴트 값이 전달되도록 함수 설정 
//-----------------------------------------------------------------------------

int main()
{
	int iWidth = 100;
	int iHeight = 200;
	cout << "Rect Area: " << GetRectArea1(iWidth, iHeight) << endl;     // GetRectAreal(100,200)
	cout << "Rect Area: " << GetRectArea1() << endl;                    // GetRectAreal(10,10)
	cout << "Rect Area: " << GetRectArea1(5) << endl;					// GetRectAreal(5,10)
	cout << "Rect Area: " << GetRectArea1(5, 7) << endl;				// GetRectAreal(5,7)
	
	// (주의) 디폴트 매개변수는 모두 끝 쪽에 몰려 선언 
	cout << endl << endl;
	//cout << "Rect Area: " << GetRectArea2() << endl;                    // Error
	cout << "Rect Area: " << GetRectArea2(5) << endl;                    // GetRectArea2(5,10)
	cout << "Rect Area: " << GetRectArea2(5, 100) << endl;               // GetRectArea2(5,100)
	

	return 0;
}
