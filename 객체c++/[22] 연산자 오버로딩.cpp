#include <iostream>
using namespace std;  // std:: -> C++ ǥ�ؿ��� ���� ǥ�� �̸� ����(iostream ���� ��� Ŭ���� / �Լ��� ����) 

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
// ������ �����ε� -> ���� �����ڿ� ���ο� ������ ���� �� ��� 
//--------------------------------------------------------------
int main(void)
{
	Point<int> P1(10, 20);
	Point<int> P2(5, 2);
	
	P1.showNumber();
	P2.showNumber();

	return 0;
}
