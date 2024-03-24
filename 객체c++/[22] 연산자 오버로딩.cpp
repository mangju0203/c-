#include <iostream>
using namespace std;  // std:: -> C++ 표준에서 정한 표준 이름 공간(iostream 내의 모든 클래스 / 함수에 적용) 

// template calss
template <typename T>
class Point
{
private:
	T x, y;
public:
	Point(T x, T y) { this->x = x; this ->y = y;}
	T GetAdd()		{ return x+y;}
	T showNumber()  { cout << "x: " << x << ", y: " << y << endl;}
};

//------------------------------------------------------------------
// 연산자 오버로딩 -> 기존 연산자에 새로운 연산을 정의 후 사용 
//--------------------------------------------------------------
int main(void)
{
	Point<int> P1(10, 20);
	Point<int> P2(5, 2);
	
	P1.showNumber();
	P2.showNumber();

	return 0;
}
