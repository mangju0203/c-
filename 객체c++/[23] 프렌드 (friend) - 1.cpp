//--------------------------------------------------------------------
// friend 개념 맟 friend 함수 
// - 클래스를 파괴시키는.. 
// - 클래스 안에 있는 전역 변수를 마음대로 쓰는... 
// (23) 클래스 외부에 작성된 함수 equal()를 friend 함수로 선언
//
//(24) 다른 크래스의 멤버 함수를 frienf 함수로 선언
// (25) 다른 클래스의 모든 함수를 friend 함수로 선언 
//--------------------------------------------------------------------

#include <iostream>
using namespace std;  // std:: -> C++ 표준에서 정한 표준 이름 공간(iostream 내의 모든 클래스 / 함수에 적용) 

// (Step1) 클래스 외부에 작성된 함수 equal()를 friend 함수로 선언 
class Rect
{
private:
	int width, height;
public:
	Rect(int x, int y) { width = x; height = y;} 
	friend bool equal(Rect r1, Rect r2);       // friend 함수 선언 
};

bool equal(Rect r1, Rect r2)
{
	if((r1.width == r2.width) && (r1.height == r2.height)) return true;
	return false;
}

int main(void)
{
	//Step1
	Rect R1(3, 4);
	Rect R2(3, 4);
	
	if (equal(R1, R2))  cout << "Equal" << endl;
	else				cout << "Not Equal" << endl;
	
	return 0;
}
